#include<vector>

int BusquedaBinaria(int x, std::vector<int> v, int ini, int fin){
	if (ini > fin){
		return -1;
	}
	int medio = (ini + fin)/2;
	if (v[medio] == x){
		return medio;
	}
	else if(v[medio] > x){
		return BusquedaBinaria(x, v, ini, medio-1);
	}
	else{
		return BusquedaBinaria(x, v, medio +1, fin);
	}
}

template <typename T>
int Partition(std::vector<T>& v, int ini, int fin){
	T x = v[fin];
	int i = ini;
	int j;
	for (j=ini; j<fin; j++){
		if (v[j] <= x){
			T a = v[i];
			v[i] = v[j];
			v[j] = a;
			i++;
		}
	}
        T b = v[i];
        v[i] = v[fin];
        v[j] = b;
	return i;
}

template <typename T>
void QuickSort(std::vector<T>& v, int ini, int fin){
	if (ini < fin){
		int pivot = Partition(v, ini, fin);
		QuickSort(v, ini, pivot -1);
		QuickSort(v, pivot +1, fin);
	}
}


#include <iostream> 
using namespace std;
int main() {
    int TC;
    cin>>TC;
    while(TC--){
        int N,X,c;
        cin>>N>>X>>c;
        int arr[N];
        for (int i=0; i<N; i++)
            cin>>arr[i];
        long long int sum = 0;
        int count=0;
        for (int i=0; i<N; i++){
            if(X-arr[i]>c){
                sum+=X;
                count+=c;
            }
            else
                sum+=arr[i];
        }
        cout<<sum-count<<endl;
    }
    return 0;
}

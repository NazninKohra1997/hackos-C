int marks_summation(int arr[],int n,char gender){
     int sum=0;

    for(int i=0;i<n;i++){
        if(i%2==0 && gender=='b'){
            sum+=arr[i];
        }
        else if(i%2!=0 && gender=='g'){
            sum+=arr[i];
        }
    }
    return sum;
}

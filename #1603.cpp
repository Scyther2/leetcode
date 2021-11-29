class ParkingSystem {
    int arr[3];
    int avail[3]={0,0,0};
public:
    ParkingSystem(int big, int medium, int small) {
        arr[0]=big;
        arr[1]=medium;
        arr[2]=small;
    }
    
    bool addCar(int carType) {
        if(carType==1)
        {
            if(avail[0]<arr[0])
            {
                avail[0]++;
                return true;
            }
            return false;
        }
        else if(carType==2)
        {
            if(avail[1]<arr[1])
            {
                avail[1]++;
                return true;
            }
            return false;
        }
        else
        {
            if(avail[2]<arr[2])
            {
                avail[2]++;
                return true;
            }
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */

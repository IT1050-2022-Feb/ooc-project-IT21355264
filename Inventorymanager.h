#include <string>
class Inventorymanager
{
private:
  	int inventoryId;
  	char inventorytype[50];
  	char inventoryItems[50];

public:
    Inventorymanager();
    Inventorymanager(int i_id,const char in_type[],const char in_item[]);
		void addInvetory();
	  void deleteInvetory();
		void searchInventory();
    ~Inventorymanager();

};

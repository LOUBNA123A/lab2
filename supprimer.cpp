
void hash1::supprimerItem(std::string nom){
int index=Hash(nom);
if (HashTable[index]->nom=="vide"){
std::cout << "the table is empty and the item does not exist"<<std::endl;
}
else{
while(HashTable[index]->nom==nom){
HashTable[index]=HashTable[index]->next;
}
if (HashTable[index]->next==NULL){
std::cout << "the item does not exist "<<std::endl;
}
else{
item* ptr=HashTable[index];
while(ptr->next!=NULL){
if(ptr->next->nom==nom){
ptr->next=(ptr->next)->next;
}
else{
ptr=ptr->next;
}
}
}
}
}

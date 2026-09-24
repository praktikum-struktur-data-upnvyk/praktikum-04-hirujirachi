CNode* baru = new CNode;
    baru->data = nomor;
    baru->next = nullptr;

    if (head == nullptr) {
        head = baru;
    } else {
        CNode* p = head;
        while (p->next != nullptr) {
            p = p->next;
        }
        p->next = baru;
    }

    return true;
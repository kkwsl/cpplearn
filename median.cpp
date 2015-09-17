template<class T>
bool median(vector<T>& vec, T& val)
{
	sort(vec.begin(), vec.end());
	vector<T>::iterator last = unique(vec.begin(), vec.end());
	vec.erase(last, vec.end());

	vector<T>::size_type index = vec.size() / 2;
	if(vec[index] > vec[index - 1] && vec[index] < vec[index + 1])
	{
		val = vec[index];
		return true;
	}
	return false;
}
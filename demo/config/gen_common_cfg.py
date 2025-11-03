def get_process_index_range(process_count : int, process_group_index : int):
    # Every ProcessGroup gets the same number of processes
    # The Process Index is a globally unique increasing number
    return range(process_group_index*process_count, (process_group_index*process_count)+process_count)

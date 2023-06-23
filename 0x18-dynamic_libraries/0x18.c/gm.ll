source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_601ff8 = local_unnamed_addr global i64 0
@global_var_601e20 = local_unnamed_addr global i64 0
@global_var_400d88 = constant [4 x i8] c"%d \00"
@global_var_400d8c = constant [6 x i8] c"- %d\0A\00"
@global_var_400d98 = constant [33 x i8] c"Congratulations, you win 1 point\00"
@global_var_400dc0 = constant [34 x i8] c"Congratulations, you win 2 points\00"
@global_var_400de8 = constant [34 x i8] c"Congratulations, you win 5 points\00"
@global_var_400e10 = constant [35 x i8] c"Congratulations, you win 50 points\00"
@global_var_400e38 = constant [36 x i8] c"Congratulations, you win 500 points\00"
@global_var_400e60 = constant [38 x i8] c"Congratulations, you win 5,000 points\00"
@global_var_400e88 = constant [42 x i8] c"Congratulations, you win 1,000,000 points\00"
@global_var_400eb8 = constant [38 x i8] c"Congratulations, you win the Jackpot!\00"
@global_var_400ede = constant [18 x i8] c"Sorry, try again!\00"
@global_var_400ef0 = constant [139 x i8] c"Usage: gm n1 n2 n3 n4 n5 bonus\0A - (first pool) five different numbers from 1 to 75, followed by \0A - (second pool) one number from 1 to 15\0A\00"
@global_var_601e10 = local_unnamed_addr global i64 4196112
@global_var_601e18 = local_unnamed_addr global i64 4196080
@0 = external global i32
@global_var_602070 = local_unnamed_addr global i8 0

define i64 @check_input(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_400736:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %storemerge4.in.reg2mem = alloca i32, !insn.addr !0
  %storemerge10.reg2mem = alloca i32, !insn.addr !0
  %0 = trunc i64 %arg3 to i32, !insn.addr !1
  %1 = icmp sgt i32 %0, 0, !insn.addr !2
  store i32 0, i32* %storemerge10.reg2mem, !insn.addr !2
  br i1 %1, label %dec_label_pc_400750, label %dec_label_pc_400803, !insn.addr !2

dec_label_pc_400750:                              ; preds = %dec_label_pc_400736, %dec_label_pc_4007da
  %storemerge10.reload = load i32, i32* %storemerge10.reg2mem
  %2 = sext i32 %storemerge10.reload to i64, !insn.addr !3
  %3 = mul i64 %2, 4, !insn.addr !4
  %4 = add i64 %3, %arg1, !insn.addr !5
  %5 = inttoptr i64 %4 to i32*, !insn.addr !6
  %6 = load i32, i32* %5, align 4, !insn.addr !6
  %.off6 = add i32 %6, -1
  %7 = icmp ult i32 %.off6, 75
  store i32 %storemerge10.reload, i32* %storemerge4.in.reg2mem, !insn.addr !7
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !7
  br i1 %7, label %dec_label_pc_4007d2, label %dec_label_pc_400808, !insn.addr !7

dec_label_pc_400797:                              ; preds = %dec_label_pc_4007d2
  %8 = sext i32 %storemerge4 to i64, !insn.addr !8
  %9 = mul i64 %8, 4, !insn.addr !9
  %10 = add i64 %9, %arg1, !insn.addr !10
  %11 = inttoptr i64 %10 to i32*, !insn.addr !11
  %12 = load i32, i32* %11, align 4, !insn.addr !11
  %13 = icmp eq i32 %6, %12, !insn.addr !12
  %14 = icmp eq i1 %13, false, !insn.addr !13
  store i32 %storemerge4, i32* %storemerge4.in.reg2mem, !insn.addr !13
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !13
  br i1 %14, label %dec_label_pc_4007d2, label %dec_label_pc_400808, !insn.addr !13

dec_label_pc_4007d2:                              ; preds = %dec_label_pc_400750, %dec_label_pc_400797
  %storemerge4.in.reload = load i32, i32* %storemerge4.in.reg2mem
  %storemerge4 = add nuw i32 %storemerge4.in.reload, 1
  %15 = icmp slt i32 %storemerge4, %0, !insn.addr !14
  br i1 %15, label %dec_label_pc_400797, label %dec_label_pc_4007da, !insn.addr !14

dec_label_pc_4007da:                              ; preds = %dec_label_pc_4007d2
  %16 = add nuw i32 %storemerge10.reload, 1, !insn.addr !15
  %17 = icmp slt i32 %16, %0, !insn.addr !2
  store i32 %16, i32* %storemerge10.reg2mem, !insn.addr !2
  br i1 %17, label %dec_label_pc_400750, label %dec_label_pc_4007ea, !insn.addr !2

dec_label_pc_4007ea:                              ; preds = %dec_label_pc_4007da
  %18 = icmp eq i32 %0, 5, !insn.addr !16
  %19 = icmp eq i1 %18, false, !insn.addr !17
  br i1 %19, label %dec_label_pc_400803, label %dec_label_pc_4007f0, !insn.addr !17

dec_label_pc_4007f0:                              ; preds = %dec_label_pc_4007ea
  %20 = trunc i64 %arg2 to i32, !insn.addr !18
  %.off = add i32 %20, -1
  %21 = icmp ult i32 %.off, 15
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !19
  br i1 %21, label %dec_label_pc_400803, label %dec_label_pc_400808, !insn.addr !19

dec_label_pc_400803:                              ; preds = %dec_label_pc_400736, %dec_label_pc_4007f0, %dec_label_pc_4007ea
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !20
  br label %dec_label_pc_400808, !insn.addr !20

dec_label_pc_400808:                              ; preds = %dec_label_pc_400750, %dec_label_pc_400797, %dec_label_pc_4007f0, %dec_label_pc_400803
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !21

; uselistorder directives
  uselistorder i32 %storemerge4, { 2, 1, 0 }
  uselistorder i32 %storemerge10.reload, { 1, 0, 2 }
  uselistorder i32 %0, { 0, 3, 2, 1 }
  uselistorder i32* %storemerge10.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge4.in.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 4, 3, 2, 1 }
  uselistorder i32 -1, { 1, 0 }
  uselistorder label %dec_label_pc_400808, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_400803, { 1, 2, 0 }
  uselistorder label %dec_label_pc_4007d2, { 1, 0 }
  uselistorder label %dec_label_pc_400750, { 1, 0 }
}

define i64 @pick_numbers(i64* %arg1, i64* %arg2) local_unnamed_addr {
dec_label_pc_40080a:
  %rsi = alloca i64, align 8
  %0 = ptrtoint i64* %arg1 to i64
  %1 = call i32 @time(i32* null), !insn.addr !22
  call void @srand(i32 %1), !insn.addr !23
  %2 = call i32 @rand(), !insn.addr !24
  %3 = sext i32 %2 to i64, !insn.addr !25
  %4 = mul nsw i64 %3, -2004318071, !insn.addr !25
  %5 = udiv i64 %4, 4294967296, !insn.addr !25
  %6 = trunc i64 %5 to i32
  %7 = add i32 %2, %6, !insn.addr !26
  %8 = ashr i32 %7, 3, !insn.addr !27
  %9 = ashr i32 %2, 31, !insn.addr !28
  %10 = sub nsw i32 %8, %9, !insn.addr !29
  %11 = mul i32 %10, -15
  %12 = add i32 %2, 1, !insn.addr !30
  %13 = add i32 %12, %11, !insn.addr !31
  %14 = bitcast i64* %arg2 to i32*, !insn.addr !32
  store i32 %13, i32* %14, align 4, !insn.addr !32
  %15 = call i32 @rand(), !insn.addr !33
  %16 = srem i32 %15, 75
  %17 = add nsw i32 %16, 1, !insn.addr !34
  %18 = bitcast i64* %arg1 to i32*, !insn.addr !35
  store i32 %17, i32* %18, align 4, !insn.addr !35
  %19 = add i64 %0, 4, !insn.addr !36
  %20 = inttoptr i64 %19 to i32*
  %21 = bitcast i64* %rsi to i32*
  br label %dec_label_pc_40088d, !insn.addr !35

dec_label_pc_40088d:                              ; preds = %dec_label_pc_40088d, %dec_label_pc_40080a
  %22 = call i32 @rand(), !insn.addr !37
  %23 = srem i32 %22, 75
  %24 = add nsw i32 %23, 1, !insn.addr !38
  store i32 %24, i32* %20, align 4, !insn.addr !39
  %25 = load i32, i32* %21, align 8, !insn.addr !40
  %26 = zext i32 %25 to i64, !insn.addr !41
  %27 = call i64 @check_input(i64 %0, i64 %26, i64 2), !insn.addr !42
  %28 = trunc i64 %27 to i32, !insn.addr !43
  %29 = icmp eq i32 %28, 0, !insn.addr !43
  br i1 %29, label %dec_label_pc_40088d, label %dec_label_pc_4008da.preheader, !insn.addr !44

dec_label_pc_4008da.preheader:                    ; preds = %dec_label_pc_40088d
  %30 = add i64 %0, 8, !insn.addr !45
  %31 = inttoptr i64 %30 to i32*
  br label %dec_label_pc_4008da

dec_label_pc_4008da:                              ; preds = %dec_label_pc_4008da.preheader, %dec_label_pc_4008da
  %32 = call i32 @rand(), !insn.addr !46
  %33 = srem i32 %32, 75
  %34 = add nsw i32 %33, 1, !insn.addr !47
  store i32 %34, i32* %31, align 4, !insn.addr !48
  %35 = load i32, i32* %21, align 8, !insn.addr !49
  %36 = zext i32 %35 to i64, !insn.addr !50
  %37 = call i64 @check_input(i64 %0, i64 %36, i64 3), !insn.addr !51
  %38 = trunc i64 %37 to i32, !insn.addr !52
  %39 = icmp eq i32 %38, 0, !insn.addr !52
  br i1 %39, label %dec_label_pc_4008da, label %dec_label_pc_400927.preheader, !insn.addr !53

dec_label_pc_400927.preheader:                    ; preds = %dec_label_pc_4008da
  %40 = add i64 %0, 12, !insn.addr !54
  %41 = inttoptr i64 %40 to i32*
  br label %dec_label_pc_400927

dec_label_pc_400927:                              ; preds = %dec_label_pc_400927.preheader, %dec_label_pc_400927
  %42 = call i32 @rand(), !insn.addr !55
  %43 = srem i32 %42, 75
  %44 = add nsw i32 %43, 1, !insn.addr !56
  store i32 %44, i32* %41, align 4, !insn.addr !57
  %45 = load i32, i32* %21, align 8, !insn.addr !58
  %46 = zext i32 %45 to i64, !insn.addr !59
  %47 = call i64 @check_input(i64 %0, i64 %46, i64 4), !insn.addr !60
  %48 = trunc i64 %47 to i32, !insn.addr !61
  %49 = icmp eq i32 %48, 0, !insn.addr !61
  br i1 %49, label %dec_label_pc_400927, label %dec_label_pc_400974.preheader, !insn.addr !62

dec_label_pc_400974.preheader:                    ; preds = %dec_label_pc_400927
  %50 = add i64 %0, 16, !insn.addr !63
  %51 = inttoptr i64 %50 to i32*
  br label %dec_label_pc_400974

dec_label_pc_400974:                              ; preds = %dec_label_pc_400974.preheader, %dec_label_pc_400974
  %52 = call i32 @rand(), !insn.addr !64
  %53 = srem i32 %52, 75
  %54 = add nsw i32 %53, 1, !insn.addr !65
  store i32 %54, i32* %51, align 4, !insn.addr !66
  %55 = load i32, i32* %21, align 8, !insn.addr !67
  %56 = zext i32 %55 to i64, !insn.addr !68
  %57 = call i64 @check_input(i64 %0, i64 %56, i64 5), !insn.addr !69
  %58 = trunc i64 %57 to i32, !insn.addr !70
  %59 = icmp eq i32 %58, 0, !insn.addr !70
  br i1 %59, label %dec_label_pc_400974, label %dec_label_pc_4009c1, !insn.addr !71

dec_label_pc_4009c1:                              ; preds = %dec_label_pc_400974
  ret i64 %57, !insn.addr !72

; uselistorder directives
  uselistorder i32* %21, { 2, 1, 0, 3 }
  uselistorder i32 %2, { 1, 2, 0, 3 }
  uselistorder i32 ()* @rand, { 1, 2, 3, 4, 5, 0 }
  uselistorder label %dec_label_pc_400974, { 1, 0 }
  uselistorder label %dec_label_pc_400927, { 1, 0 }
  uselistorder label %dec_label_pc_4008da, { 1, 0 }
}

define i64 @print_numbers(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_4009c9:
  %indvars.iv.reg2mem = alloca i64, !insn.addr !73
  %0 = ptrtoint i64* %arg1 to i64
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_4009e1

dec_label_pc_4009e1:                              ; preds = %dec_label_pc_4009e1, %dec_label_pc_4009c9
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %1 = mul i64 %indvars.iv.reload, 4, !insn.addr !74
  %2 = add i64 %1, %0, !insn.addr !75
  %3 = inttoptr i64 %2 to i32*, !insn.addr !76
  %4 = load i32, i32* %3, align 4, !insn.addr !76
  %5 = zext i32 %4 to i64, !insn.addr !77
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_400d88, i64 0, i64 0), i64 %5), !insn.addr !78
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 5
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !79
  br i1 %exitcond, label %dec_label_pc_400a12, label %dec_label_pc_4009e1, !insn.addr !79

dec_label_pc_400a12:                              ; preds = %dec_label_pc_4009e1
  %7 = and i64 %arg2, 4294967295
  %8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_400d8c, i64 0, i64 0), i64 %7), !insn.addr !80
  %9 = sext i32 %8 to i64, !insn.addr !80
  ret i64 %9, !insn.addr !81

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i8*, ...)* @printf, { 1, 0 }
}

define i64 @check_result(i64* %arg1, i64 %arg2, i32* %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_400a29:
  %rax.0.in.reg2mem = alloca i32, !insn.addr !82
  %stack_var_-24.122.reg2mem = alloca i32, !insn.addr !82
  %indvars.iv24.reg2mem = alloca i64, !insn.addr !82
  %stack_var_-24.0.reg2mem = alloca i32, !insn.addr !82
  %indvars.iv.reg2mem = alloca i64, !insn.addr !82
  %0 = ptrtoint i64* %arg1 to i64
  %1 = ptrtoint i32* %arg3 to i64, !insn.addr !83
  store i64 0, i64* %indvars.iv24.reg2mem
  store i32 0, i32* %stack_var_-24.122.reg2mem
  br label %dec_label_pc_400a99.preheader

dec_label_pc_400a5f:                              ; preds = %dec_label_pc_400a99.preheader, %dec_label_pc_400a99
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %2 = mul i64 %indvars.iv.reload, 4, !insn.addr !84
  %3 = add i64 %2, %1, !insn.addr !85
  %4 = inttoptr i64 %3 to i32*, !insn.addr !86
  %5 = load i32, i32* %4, align 4, !insn.addr !86
  %6 = icmp eq i32 %13, %5, !insn.addr !87
  %7 = icmp eq i1 %6, false, !insn.addr !88
  br i1 %7, label %dec_label_pc_400a99, label %dec_label_pc_400a8f, !insn.addr !88

dec_label_pc_400a8f:                              ; preds = %dec_label_pc_400a5f
  %8 = add i32 %stack_var_-24.122.reload, 1, !insn.addr !89
  store i32 %8, i32* %stack_var_-24.0.reg2mem, !insn.addr !90
  br label %dec_label_pc_400a9f, !insn.addr !90

dec_label_pc_400a99:                              ; preds = %dec_label_pc_400a5f
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %9 = icmp ult i64 %indvars.iv.next, 5, !insn.addr !91
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !91
  store i32 %stack_var_-24.122.reload, i32* %stack_var_-24.0.reg2mem, !insn.addr !91
  br i1 %9, label %dec_label_pc_400a5f, label %dec_label_pc_400a9f, !insn.addr !91

dec_label_pc_400a9f:                              ; preds = %dec_label_pc_400a99, %dec_label_pc_400a8f
  %stack_var_-24.0.reload = load i32, i32* %stack_var_-24.0.reg2mem
  %indvars.iv.next25 = add nuw nsw i64 %indvars.iv24.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next25, 5
  store i64 %indvars.iv.next25, i64* %indvars.iv24.reg2mem, !insn.addr !92
  store i32 %stack_var_-24.0.reload, i32* %stack_var_-24.122.reg2mem, !insn.addr !92
  br i1 %exitcond, label %dec_label_pc_400aa9, label %dec_label_pc_400a99.preheader, !insn.addr !92

dec_label_pc_400a99.preheader:                    ; preds = %dec_label_pc_400a9f, %dec_label_pc_400a29
  %stack_var_-24.122.reload = load i32, i32* %stack_var_-24.122.reg2mem
  %indvars.iv24.reload = load i64, i64* %indvars.iv24.reg2mem
  %10 = mul i64 %indvars.iv24.reload, 4, !insn.addr !93
  %11 = add i64 %10, %0, !insn.addr !94
  %12 = inttoptr i64 %11 to i32*, !insn.addr !95
  %13 = load i32, i32* %12, align 4, !insn.addr !95
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_400a5f

dec_label_pc_400aa9:                              ; preds = %dec_label_pc_400a9f
  %14 = trunc i64 %arg2 to i32, !insn.addr !96
  %15 = icmp eq i32 %14, %arg4, !insn.addr !97
  %16 = icmp eq i32 %stack_var_-24.0.reload, 0, !insn.addr !98
  %17 = icmp eq i1 %15, %16
  br i1 %17, label %dec_label_pc_400ac4, label %dec_label_pc_400ad3, !insn.addr !99

dec_label_pc_400ac4:                              ; preds = %dec_label_pc_400aa9
  %18 = call i32 @puts(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_400d98, i64 0, i64 0)), !insn.addr !100
  store i32 %18, i32* %rax.0.in.reg2mem, !insn.addr !101
  br label %dec_label_pc_400ba6, !insn.addr !101

dec_label_pc_400ad3:                              ; preds = %dec_label_pc_400aa9
  %19 = icmp eq i32 %stack_var_-24.0.reload, 1, !insn.addr !102
  %20 = icmp eq i1 %15, %19
  br i1 %20, label %dec_label_pc_400adf, label %dec_label_pc_400aee, !insn.addr !103

dec_label_pc_400adf:                              ; preds = %dec_label_pc_400ad3
  %21 = call i32 @puts(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_400dc0, i64 0, i64 0)), !insn.addr !104
  store i32 %21, i32* %rax.0.in.reg2mem, !insn.addr !105
  br label %dec_label_pc_400ba6, !insn.addr !105

dec_label_pc_400aee:                              ; preds = %dec_label_pc_400ad3
  %22 = icmp eq i32 %stack_var_-24.0.reload, 2, !insn.addr !106
  %23 = icmp eq i1 %15, %22
  br i1 %23, label %dec_label_pc_400afa, label %dec_label_pc_400b09, !insn.addr !107

dec_label_pc_400afa:                              ; preds = %dec_label_pc_400aee
  %24 = call i32 @puts(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_400de8, i64 0, i64 0)), !insn.addr !108
  store i32 %24, i32* %rax.0.in.reg2mem, !insn.addr !109
  br label %dec_label_pc_400ba6, !insn.addr !109

dec_label_pc_400b09:                              ; preds = %dec_label_pc_400aee
  %25 = icmp eq i1 %15, false, !insn.addr !110
  %26 = icmp eq i32 %stack_var_-24.0.reload, 3, !insn.addr !111
  %27 = icmp eq i1 %25, %26
  br i1 %27, label %dec_label_pc_400b15, label %dec_label_pc_400b24, !insn.addr !112

dec_label_pc_400b15:                              ; preds = %dec_label_pc_400b09
  %28 = call i32 @puts(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_400de8, i64 0, i64 0)), !insn.addr !113
  store i32 %28, i32* %rax.0.in.reg2mem, !insn.addr !114
  br label %dec_label_pc_400ba6, !insn.addr !114

dec_label_pc_400b24:                              ; preds = %dec_label_pc_400b09
  %29 = icmp eq i1 %15, %26
  br i1 %29, label %dec_label_pc_400b30, label %dec_label_pc_400b3c, !insn.addr !115

dec_label_pc_400b30:                              ; preds = %dec_label_pc_400b24
  %30 = call i32 @puts(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_400e10, i64 0, i64 0)), !insn.addr !116
  store i32 %30, i32* %rax.0.in.reg2mem, !insn.addr !117
  br label %dec_label_pc_400ba6, !insn.addr !117

dec_label_pc_400b3c:                              ; preds = %dec_label_pc_400b24
  %31 = icmp eq i32 %stack_var_-24.0.reload, 4, !insn.addr !118
  %32 = icmp eq i1 %25, %31
  br i1 %32, label %dec_label_pc_400b48, label %dec_label_pc_400b54, !insn.addr !119

dec_label_pc_400b48:                              ; preds = %dec_label_pc_400b3c
  %33 = call i32 @puts(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_400e38, i64 0, i64 0)), !insn.addr !120
  store i32 %33, i32* %rax.0.in.reg2mem, !insn.addr !121
  br label %dec_label_pc_400ba6, !insn.addr !121

dec_label_pc_400b54:                              ; preds = %dec_label_pc_400b3c
  %34 = icmp eq i1 %15, %31
  br i1 %34, label %dec_label_pc_400b60, label %dec_label_pc_400b6c, !insn.addr !122

dec_label_pc_400b60:                              ; preds = %dec_label_pc_400b54
  %35 = call i32 @puts(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_400e60, i64 0, i64 0)), !insn.addr !123
  store i32 %35, i32* %rax.0.in.reg2mem, !insn.addr !124
  br label %dec_label_pc_400ba6, !insn.addr !124

dec_label_pc_400b6c:                              ; preds = %dec_label_pc_400b54
  %36 = icmp eq i32 %stack_var_-24.0.reload, 5, !insn.addr !125
  %37 = icmp eq i1 %25, %36
  br i1 %37, label %dec_label_pc_400b78, label %dec_label_pc_400b84, !insn.addr !126

dec_label_pc_400b78:                              ; preds = %dec_label_pc_400b6c
  %38 = call i32 @puts(i8* getelementptr inbounds ([42 x i8], [42 x i8]* @global_var_400e88, i64 0, i64 0)), !insn.addr !127
  store i32 %38, i32* %rax.0.in.reg2mem, !insn.addr !128
  br label %dec_label_pc_400ba6, !insn.addr !128

dec_label_pc_400b84:                              ; preds = %dec_label_pc_400b6c
  %39 = icmp eq i1 %15, %36
  br i1 %39, label %dec_label_pc_400b90, label %dec_label_pc_400b9c, !insn.addr !129

dec_label_pc_400b90:                              ; preds = %dec_label_pc_400b84
  %40 = call i32 @puts(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_400eb8, i64 0, i64 0)), !insn.addr !130
  store i32 %40, i32* %rax.0.in.reg2mem, !insn.addr !131
  br label %dec_label_pc_400ba6, !insn.addr !131

dec_label_pc_400b9c:                              ; preds = %dec_label_pc_400b84
  %41 = call i32 @puts(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_400ede, i64 0, i64 0)), !insn.addr !132
  store i32 %41, i32* %rax.0.in.reg2mem, !insn.addr !132
  br label %dec_label_pc_400ba6, !insn.addr !132

dec_label_pc_400ba6:                              ; preds = %dec_label_pc_400b9c, %dec_label_pc_400b90, %dec_label_pc_400b78, %dec_label_pc_400b60, %dec_label_pc_400b48, %dec_label_pc_400b30, %dec_label_pc_400b15, %dec_label_pc_400afa, %dec_label_pc_400adf, %dec_label_pc_400ac4
  %rax.0.in.reload = load i32, i32* %rax.0.in.reg2mem
  %rax.0 = sext i32 %rax.0.in.reload to i64
  ret i64 %rax.0, !insn.addr !133

; uselistorder directives
  uselistorder i1 %15, { 0, 1, 2, 6, 3, 4, 5 }
  uselistorder i64 %indvars.iv24.reload, { 1, 0 }
  uselistorder i32 %stack_var_-24.0.reload, { 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 1, 0 }
  uselistorder i32* %rax.0.in.reg2mem, { 0, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 }
  uselistorder i32 (i8*)* @puts, { 1, 0, 4, 5, 3, 2, 6, 7, 9, 8 }
  uselistorder i64 4, { 0, 1, 2, 5, 6, 3, 4 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_400ba9:
  %rax.1.reg2mem = alloca i64, !insn.addr !134
  %rax.0.reg2mem = alloca i64, !insn.addr !134
  %stack_var_-40 = alloca i64, align 8
  %stack_var_-80 = alloca i32, align 4
  %stack_var_-72 = alloca i32, align 4
  %0 = trunc i64 %argc to i32, !insn.addr !135
  %1 = call i64 @__readfsqword(i64 40), !insn.addr !136
  %2 = icmp eq i32 %0, 7, !insn.addr !137
  br i1 %2, label %dec_label_pc_400beb, label %dec_label_pc_400bcd, !insn.addr !138

dec_label_pc_400bcd:                              ; preds = %dec_label_pc_400ba9
  %3 = call i32 (i32, i8*, ...) @dprintf(i32 2, i8* getelementptr inbounds ([139 x i8], [139 x i8]* @global_var_400ef0, i64 0, i64 0)), !insn.addr !139
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !140
  br label %dec_label_pc_400ce3, !insn.addr !140

dec_label_pc_400beb:                              ; preds = %dec_label_pc_400ba9
  %4 = ptrtoint i8** %argv to i64, !insn.addr !141
  %5 = add i64 %4, 8, !insn.addr !142
  %6 = inttoptr i64 %5 to i64*, !insn.addr !143
  %7 = load i64, i64* %6, align 8, !insn.addr !143
  %8 = inttoptr i64 %7 to i8*, !insn.addr !144
  %9 = call i32 @atoi(i8* %8), !insn.addr !144
  store i32 %9, i32* %stack_var_-72, align 4, !insn.addr !145
  %10 = add i64 %4, 16, !insn.addr !146
  %11 = inttoptr i64 %10 to i64*, !insn.addr !147
  %12 = load i64, i64* %11, align 8, !insn.addr !147
  %13 = inttoptr i64 %12 to i8*, !insn.addr !148
  %14 = call i32 @atoi(i8* %13), !insn.addr !148
  %15 = add i64 %4, 24, !insn.addr !149
  %16 = inttoptr i64 %15 to i64*, !insn.addr !150
  %17 = load i64, i64* %16, align 8, !insn.addr !150
  %18 = inttoptr i64 %17 to i8*, !insn.addr !151
  %19 = call i32 @atoi(i8* %18), !insn.addr !151
  %20 = add i64 %4, 32, !insn.addr !152
  %21 = inttoptr i64 %20 to i64*, !insn.addr !153
  %22 = load i64, i64* %21, align 8, !insn.addr !153
  %23 = inttoptr i64 %22 to i8*, !insn.addr !154
  %24 = call i32 @atoi(i8* %23), !insn.addr !154
  %25 = add i64 %4, 40, !insn.addr !155
  %26 = inttoptr i64 %25 to i64*, !insn.addr !156
  %27 = load i64, i64* %26, align 8, !insn.addr !156
  %28 = inttoptr i64 %27 to i8*, !insn.addr !157
  %29 = call i32 @atoi(i8* %28), !insn.addr !157
  %30 = add i64 %4, 48, !insn.addr !158
  %31 = inttoptr i64 %30 to i64*, !insn.addr !159
  %32 = load i64, i64* %31, align 8, !insn.addr !159
  %33 = inttoptr i64 %32 to i8*, !insn.addr !160
  %34 = call i32 @atoi(i8* %33), !insn.addr !160
  %35 = zext i32 %34 to i64, !insn.addr !161
  %36 = ptrtoint i32* %stack_var_-72 to i64, !insn.addr !162
  %37 = call i64 @check_input(i64 %36, i64 %35, i64 5), !insn.addr !163
  %38 = trunc i64 %37 to i32, !insn.addr !164
  %39 = icmp eq i32 %38, 0, !insn.addr !164
  %40 = icmp eq i1 %39, false, !insn.addr !165
  br i1 %40, label %dec_label_pc_400ca4, label %dec_label_pc_400c89, !insn.addr !165

dec_label_pc_400c89:                              ; preds = %dec_label_pc_400beb
  %41 = call i32 (i32, i8*, ...) @dprintf(i32 2, i8* getelementptr inbounds ([139 x i8], [139 x i8]* @global_var_400ef0, i64 0, i64 0)), !insn.addr !166
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !167
  br label %dec_label_pc_400ce3, !insn.addr !167

dec_label_pc_400ca4:                              ; preds = %dec_label_pc_400beb
  %42 = bitcast i32* %stack_var_-80 to i64*, !insn.addr !168
  %43 = call i64 @pick_numbers(i64* nonnull %stack_var_-40, i64* nonnull %42), !insn.addr !168
  %44 = load i32, i32* %stack_var_-80, align 4, !insn.addr !169
  %45 = zext i32 %44 to i64, !insn.addr !170
  %46 = call i64 @print_numbers(i64* nonnull %stack_var_-40, i64 %45), !insn.addr !171
  %47 = load i32, i32* %stack_var_-80, align 4, !insn.addr !172
  %48 = zext i32 %47 to i64, !insn.addr !172
  %49 = call i64 @check_result(i64* nonnull %stack_var_-40, i64 %48, i32* nonnull %stack_var_-72, i32 %34), !insn.addr !173
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !174
  br label %dec_label_pc_400ce3, !insn.addr !174

dec_label_pc_400ce3:                              ; preds = %dec_label_pc_400ca4, %dec_label_pc_400c89, %dec_label_pc_400bcd
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %50 = call i64 @__readfsqword(i64 40), !insn.addr !175
  %51 = icmp eq i64 %1, %50, !insn.addr !175
  store i64 %rax.0.reload, i64* %rax.1.reg2mem, !insn.addr !176
  br i1 %51, label %dec_label_pc_400cf7, label %dec_label_pc_400cf2, !insn.addr !176

dec_label_pc_400cf2:                              ; preds = %dec_label_pc_400ce3
  call void @__stack_chk_fail(), !insn.addr !177
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.1.reg2mem, !insn.addr !177
  br label %dec_label_pc_400cf7, !insn.addr !177

dec_label_pc_400cf7:                              ; preds = %dec_label_pc_400cf2, %dec_label_pc_400ce3
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !178

; uselistorder directives
  uselistorder i32* %stack_var_-80, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i1 false, { 0, 2, 1, 4, 3 }
  uselistorder i32 0, { 3, 4, 0, 5, 6, 7, 8, 1, 2 }
  uselistorder i64 (i64, i64, i64)* @check_input, { 4, 3, 2, 1, 0 }
  uselistorder i64 5, { 3, 0, 1, 2, 4 }
  uselistorder i32 (i8*)* @atoi, { 1, 5, 4, 3, 2, 0 }
  uselistorder i64 1, { 1, 0, 3, 4, 5, 2 }
  uselistorder i64 0, { 0, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 2, 1, 29, 30, 27, 28, 3, 6, 5, 4, 31, 32 }
  uselistorder i64 40, { 0, 2, 1 }
  uselistorder i32 1, { 22, 20, 21, 1, 0, 17, 23, 6, 5, 4, 3, 2, 7, 11, 12, 13, 14, 15, 16, 19, 24, 18, 10, 9, 8 }
}

declare i32 @puts(i8*) local_unnamed_addr

declare void @__stack_chk_fail() local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @dprintf(i32, i8*, ...) local_unnamed_addr

declare void @srand(i32) local_unnamed_addr

declare i32 @time(i32*) local_unnamed_addr

declare i32 @atoi(i8*) local_unnamed_addr

declare i32 @rand() local_unnamed_addr

declare i64 @__readfsqword(i64) local_unnamed_addr

!0 = !{i64 4196150}
!1 = !{i64 4196321}
!2 = !{i64 4196324}
!3 = !{i64 4196179}
!4 = !{i64 4196181}
!5 = !{i64 4196193}
!6 = !{i64 4196196}
!7 = !{i64 4196200}
!8 = !{i64 4196272}
!9 = !{i64 4196274}
!10 = !{i64 4196286}
!11 = !{i64 4196289}
!12 = !{i64 4196291}
!13 = !{i64 4196293}
!14 = !{i64 4196312}
!15 = !{i64 4196314}
!16 = !{i64 4196330}
!17 = !{i64 4196334}
!18 = !{i64 4196336}
!19 = !{i64 4196340}
!20 = !{i64 4196355}
!21 = !{i64 4196361}
!22 = !{i64 4196384}
!23 = !{i64 4196391}
!24 = !{i64 4196396}
!25 = !{i64 4196410}
!26 = !{i64 4196412}
!27 = !{i64 4196415}
!28 = !{i64 4196422}
!29 = !{i64 4196425}
!30 = !{i64 4196438}
!31 = !{i64 4196440}
!32 = !{i64 4196447}
!33 = !{i64 4196449}
!34 = !{i64 4196484}
!35 = !{i64 4196491}
!36 = !{i64 4196497}
!37 = !{i64 4196501}
!38 = !{i64 4196536}
!39 = !{i64 4196539}
!40 = !{i64 4196545}
!41 = !{i64 4196556}
!42 = !{i64 4196561}
!43 = !{i64 4196566}
!44 = !{i64 4196568}
!45 = !{i64 4196574}
!46 = !{i64 4196578}
!47 = !{i64 4196613}
!48 = !{i64 4196616}
!49 = !{i64 4196622}
!50 = !{i64 4196633}
!51 = !{i64 4196638}
!52 = !{i64 4196643}
!53 = !{i64 4196645}
!54 = !{i64 4196651}
!55 = !{i64 4196655}
!56 = !{i64 4196690}
!57 = !{i64 4196693}
!58 = !{i64 4196699}
!59 = !{i64 4196710}
!60 = !{i64 4196715}
!61 = !{i64 4196720}
!62 = !{i64 4196722}
!63 = !{i64 4196728}
!64 = !{i64 4196732}
!65 = !{i64 4196767}
!66 = !{i64 4196770}
!67 = !{i64 4196776}
!68 = !{i64 4196787}
!69 = !{i64 4196792}
!70 = !{i64 4196797}
!71 = !{i64 4196799}
!72 = !{i64 4196808}
!73 = !{i64 4196809}
!74 = !{i64 4196838}
!75 = !{i64 4196850}
!76 = !{i64 4196853}
!77 = !{i64 4196855}
!78 = !{i64 4196867}
!79 = !{i64 4196880}
!80 = !{i64 4196897}
!81 = !{i64 4196904}
!82 = !{i64 4196905}
!83 = !{i64 4196994}
!84 = !{i64 4196986}
!85 = !{i64 4196998}
!86 = !{i64 4197001}
!87 = !{i64 4197003}
!88 = !{i64 4197005}
!89 = !{i64 4197007}
!90 = !{i64 4197011}
!91 = !{i64 4197021}
!92 = !{i64 4197031}
!93 = !{i64 4196964}
!94 = !{i64 4196976}
!95 = !{i64 4196979}
!96 = !{i64 4197033}
!97 = !{i64 4197036}
!98 = !{i64 4197048}
!99 = !{i64 4197052}
!100 = !{i64 4197065}
!101 = !{i64 4197070}
!102 = !{i64 4197075}
!103 = !{i64 4197079}
!104 = !{i64 4197092}
!105 = !{i64 4197097}
!106 = !{i64 4197102}
!107 = !{i64 4197106}
!108 = !{i64 4197119}
!109 = !{i64 4197124}
!110 = !{i64 4197039}
!111 = !{i64 4197129}
!112 = !{i64 4197133}
!113 = !{i64 4197146}
!114 = !{i64 4197151}
!115 = !{i64 4197160}
!116 = !{i64 4197173}
!117 = !{i64 4197178}
!118 = !{i64 4197180}
!119 = !{i64 4197184}
!120 = !{i64 4197197}
!121 = !{i64 4197202}
!122 = !{i64 4197208}
!123 = !{i64 4197221}
!124 = !{i64 4197226}
!125 = !{i64 4197228}
!126 = !{i64 4197232}
!127 = !{i64 4197245}
!128 = !{i64 4197250}
!129 = !{i64 4197256}
!130 = !{i64 4197269}
!131 = !{i64 4197274}
!132 = !{i64 4197281}
!133 = !{i64 4197288}
!134 = !{i64 4197289}
!135 = !{i64 4197297}
!136 = !{i64 4197304}
!137 = !{i64 4197319}
!138 = !{i64 4197323}
!139 = !{i64 4197340}
!140 = !{i64 4197350}
!141 = !{i64 4197355}
!142 = !{i64 4197359}
!143 = !{i64 4197363}
!144 = !{i64 4197369}
!145 = !{i64 4197374}
!146 = !{i64 4197381}
!147 = !{i64 4197385}
!148 = !{i64 4197391}
!149 = !{i64 4197403}
!150 = !{i64 4197407}
!151 = !{i64 4197413}
!152 = !{i64 4197425}
!153 = !{i64 4197429}
!154 = !{i64 4197435}
!155 = !{i64 4197447}
!156 = !{i64 4197451}
!157 = !{i64 4197457}
!158 = !{i64 4197469}
!159 = !{i64 4197473}
!160 = !{i64 4197479}
!161 = !{i64 4197499}
!162 = !{i64 4197501}
!163 = !{i64 4197504}
!164 = !{i64 4197509}
!165 = !{i64 4197511}
!166 = !{i64 4197528}
!167 = !{i64 4197538}
!168 = !{i64 4197554}
!169 = !{i64 4197559}
!170 = !{i64 4197566}
!171 = !{i64 4197571}
!172 = !{i64 4197576}
!173 = !{i64 4197593}
!174 = !{i64 4197598}
!175 = !{i64 4197607}
!176 = !{i64 4197616}
!177 = !{i64 4197618}
!178 = !{i64 4197624}

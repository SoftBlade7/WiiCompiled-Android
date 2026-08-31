#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071B36C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r29 = ctx->gpr[29];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8071B36C;

loc_8071B36C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r21)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071B388;
    }
}

loc_8071B374:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8071B378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071B3C0;
    }
}

loc_8071B37C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8071B380:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071B44C;
    }
}

loc_8071B384:
{
    ctx->gpr[0] = r0;
    ctx->gpr[20] = r20;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8071B388:
{
    r20 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r6 = (r22 & 255);
    r4 = 494;
    r5 = 120;
    ctx->lr = 0x8071B3A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r6 = (r22 & 255);
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r4 = 887;
    r5 = 120;
    ctx->lr = 0x8071B3BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[20] = r20;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8071B3C0:
{
    r20 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r6 = (r22 & 255);
    r4 = 887;
    r5 = 120;
    ctx->lr = 0x8071B3DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r5 = (r22 & 255);
    r4 = 494;
    ctx->lr = 0x8071B3ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCDA8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r6 = (r22 & 255);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 4));
    r4 = 494;
    r5 = 0;
    ctx->lr = 0x8071B404u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 18));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8071B410:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8071B430;
    }
}

loc_8071B414:
{
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r6 = (r22 & 255);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 12));
    r4 = 494;
    r5 = 120;
    ctx->lr = 0x8071B42Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[20] = r20;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8071B430:
{
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r6 = (r22 & 255);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 40));
    r4 = 494;
    r5 = 60;
    ctx->lr = 0x8071B448u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[20] = r20;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8071B44C:
{
    r20 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r6 = (r22 & 255);
    r4 = 494;
    r5 = 60;
    ctx->lr = 0x8071B468u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCEFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r5 = (r22 & 255);
    r4 = 887;
    ctx->lr = 0x8071B478u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCDA8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[20] = r20;
    InvokeDirectCpu<0x8071B7ECu>(ctx);
    r0 = ctx->gpr[0];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF87 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8071B36C func_8071B36C preserves=true fpr_mask=0x00000000

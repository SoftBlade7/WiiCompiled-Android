#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071A2E4(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8071A2E4;

loc_8071A2E4:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r21)));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8071A308;
    }
}

loc_8071A2EC:
{
}

loc_8071A2F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8071A374;
    }
}

loc_8071A2F4:
{
}

loc_8071A2F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8071A414;
    }
}

loc_8071A2FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_8071A300:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071A48C;
    }
}

loc_8071A304:
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

loc_8071A308:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8071A30C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071A33C;
    }
}

loc_8071A310:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r3 + -50);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8071A324:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071A33C;
    }
}

loc_8071A328:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 9008));
    r5 = 120;
    ctx->lr = 0x8071A33Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FAB2Cu>(ctx);
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
}

loc_8071A33C:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r3 + 9016));
    r6 = (r22 & 255);
    r4 = 718;
    r5 = 120;
    ctx->lr = 0x8071A358u;
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
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = (r22 & 255);
    r5 = 120;
    ctx->lr = 0x8071A370u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
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

loc_8071A374:
{
    r3 = MemoryInline::FlatRead8((r29 + 18));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8071A3B4;
    }
}

loc_8071A380:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8071A384:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071A3B4;
    }
}

loc_8071A388:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r3 + -50);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8071A39C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071A3B4;
    }
}

loc_8071A3A0:
{
    r3 = 0x809C0000u;
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 9008));
    r5 = 120;
    ctx->lr = 0x8071A3B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FAB2Cu>(ctx);
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
}

loc_8071A3B4:
{
    r20 = 0x809C0000u;
    r5 = (r22 & 255);
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r4 = 718;
    ctx->lr = 0x8071A3C8u;
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
    r4 = 718;
    r5 = 0;
    ctx->lr = 0x8071A3E0u;
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
    f1.d = MemoryInline::FlatReadFloat32((r27 + 20));
    r4 = 718;
    r5 = 120;
    ctx->lr = 0x8071A3F8u;
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
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 60));
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = (r22 & 255);
    r5 = 120;
    ctx->lr = 0x8071A410u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
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

loc_8071A414:
{
    r3 = MemoryInline::FlatRead8((r29 + 18));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8071A454;
    }
}

loc_8071A420:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8071A424:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071A454;
    }
}

loc_8071A428:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r3 + -50);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8071A43C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071A454;
    }
}

loc_8071A440:
{
    r3 = 0x809C0000u;
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 9008));
    r5 = 120;
    ctx->lr = 0x8071A454u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FAB2Cu>(ctx);
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
}

loc_8071A454:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r3 + 9016));
    r6 = (r22 & 255);
    r4 = 718;
    r5 = 120;
    ctx->lr = 0x8071A470u;
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
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = (r22 & 255);
    r5 = 120;
    ctx->lr = 0x8071A488u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
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

loc_8071A48C:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 36));
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = (r22 & 255);
    r5 = 120;
    ctx->lr = 0x8071A4A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8071A2E4 func_8071A2E4 preserves=true fpr_mask=0x00000000

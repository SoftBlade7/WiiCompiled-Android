#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80719DB4(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80719DB4;

loc_80719DB4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r21)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80719DD8;
    }
}

loc_80719DBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80719DC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80719DF8;
    }
}

loc_80719DC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80719DC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80719E50;
    }
}

loc_80719DCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80719DD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80719EB0;
    }
}

loc_80719DD4:
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

loc_80719DD8:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r27);
    r3 = MemoryInline::FlatRead32((r3 + 9016));
    r6 = (r22 & 255);
    r4 = 548;
    r5 = 120;
    ctx->lr = 0x80719DF4u;
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

loc_80719DF8:
{
    r20 = 0x809C0000u;
    r5 = (r22 & 255);
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r4 = 548;
    ctx->lr = 0x80719E0Cu;
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
    r0 = MemoryInline::FlatRead8((r29 + 18));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80719E30;
    }
}

loc_80719E18:
{
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r6 = (r22 & 255);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 4));
    r4 = 548;
    r5 = 0;
    ctx->lr = 0x80719E30u;
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
}

loc_80719E30:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 9016));
    r6 = (r22 & 255);
    r4 = 548;
    r5 = 120;
    ctx->lr = 0x80719E4Cu;
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

loc_80719E50:
{
    r20 = 0x809C0000u;
    r5 = (r22 & 255);
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r4 = 548;
    ctx->lr = 0x80719E64u;
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
    r3 = MemoryInline::FlatRead8((r29 + 18));
    r0 = (r3 + 1);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80719E74:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80719E90;
    }
}

loc_80719E78:
{
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r6 = (r22 & 255);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 4));
    r4 = 548;
    r5 = 0;
    ctx->lr = 0x80719E90u;
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
}

loc_80719E90:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 12));
    r3 = MemoryInline::FlatRead32((r3 + 9016));
    r6 = (r22 & 255);
    r4 = 548;
    r5 = 120;
    ctx->lr = 0x80719EACu;
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

loc_80719EB0:
{
    r20 = 0x809C0000u;
    r5 = (r22 & 255);
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r4 = 548;
    ctx->lr = 0x80719EC4u;
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
    r0 = MemoryInline::FlatRead8((r29 + 18));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80719EE8;
    }
}

loc_80719ED0:
{
    r3 = MemoryInline::FlatRead32((r20 + 9016));
    r6 = (r22 & 255);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 4));
    r4 = 548;
    r5 = 0;
    ctx->lr = 0x80719EE8u;
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
}

loc_80719EE8:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r27 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 9016));
    r6 = (r22 & 255);
    r4 = 548;
    r5 = 120;
    ctx->lr = 0x80719F04u;
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

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80719DB4 func_80719DB4 preserves=true fpr_mask=0x00000000

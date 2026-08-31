#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056581C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8056581C;

loc_8056581C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x80565850u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023D2B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = 0x808B0000u;
    r0 = 0;
    r3 = (r3 + 19488);
    MemoryInline::FlatWrite32((r30 + 56), r3);
    r3 = (r30 + 112);
    MemoryInline::FlatWrite32((r30 + 104), r31);
    MemoryInline::FlatWrite32((r30 + 108), r0);
    ctx->lr = 0x80565870u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80214A08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r31 = 0x80890000u;
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 5416));
    r3 = (r30 + 112);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 5420));
    MemoryInline::FlatWriteFloat32((r30 + 256), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 260), f0.d);
    MemoryInline::FlatWrite32((r30 + 264), r29);
    r12 = MemoryInline::FlatRead32((r30 + 112));
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805658A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r0 = MemoryInline::FlatRead32((r3 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805658B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805659B0;
    }
}

loc_805658B4:
{
    r3 = 0;
    ctx->lr = 0x805658BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023E48Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 264));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805658C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805658D4;
    }
}

loc_805658C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805658CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80565938;
    }
}

loc_805658D0:
{
    goto loc_8056594C;
}

loc_805658D4:
{
    r3 = 0x80380000u;
    r4 = 0x802A0000u;
    r5 = MemoryInline::FlatRead32((r3 + 28432));
    r3 = 0x80890000u;
    r0 = MemoryInline::FlatRead16((r30 + 52));
    r4 = (r4 + 16104);
    r5 = (r5 * 12);
    f2.d = MemoryInline::FlatReadFloat64((r3 + 5424));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 5416));
    r0 = (r0 | 1);
    r3 = (r4 + r5);
    r4_addr_2 = (r4 + r5);
    r4 = MemoryInline::FlatRead16(r4_addr_2);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 64), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 68), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f1.d);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    goto loc_80565AA8;
}

loc_80565938:
{
    r4 = 0x808B0000u;
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r4 + 19440));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80566E38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80565AA8;
}

loc_8056594C:
{
    r3 = 0x80380000u;
    r4 = 0x802A0000u;
    r5 = MemoryInline::FlatRead32((r3 + 28432));
    r3 = 0x80890000u;
    r0 = MemoryInline::FlatRead16((r30 + 52));
    r4 = (r4 + 16104);
    r5 = (r5 * 12);
    f2.d = MemoryInline::FlatReadFloat64((r3 + 5424));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 5416));
    r0 = (r0 | 1);
    r3 = (r4 + r5);
    r4_addr_0 = (r4 + r5);
    r4 = MemoryInline::FlatRead16(r4_addr_0);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 64), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 68), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f1.d);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    goto loc_80565AA8;
}

loc_805659B0:
{
    r3 = 1;
    ctx->lr = 0x805659B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023E48Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 264));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805659C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805659D0;
    }
}

loc_805659C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805659C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80565A34;
    }
}

loc_805659CC:
{
    goto loc_80565A48;
}

loc_805659D0:
{
    r3 = 0x80380000u;
    r4 = 0x802A0000u;
    r5 = MemoryInline::FlatRead32((r3 + 28432));
    r3 = 0x80890000u;
    r0 = MemoryInline::FlatRead16((r30 + 52));
    r4 = (r4 + 16104);
    r5 = (r5 * 12);
    f2.d = MemoryInline::FlatReadFloat64((r3 + 5424));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 5416));
    r0 = (r0 | 1);
    r3 = (r4 + r5);
    r4_addr_4 = (r4 + r5);
    r4 = MemoryInline::FlatRead16(r4_addr_4);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 64), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 68), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f1.d);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    goto loc_80565AA8;
}

loc_80565A34:
{
    r4 = 0x808B0000u;
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r4 + 19440));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80566E38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80565AA8;
}

loc_80565A48:
{
    r3 = 0x80380000u;
    r4 = 0x802A0000u;
    r5 = MemoryInline::FlatRead32((r3 + 28432));
    r3 = 0x80890000u;
    r0 = MemoryInline::FlatRead16((r30 + 52));
    r4 = (r4 + 16104);
    r5 = (r5 * 12);
    f2.d = MemoryInline::FlatReadFloat64((r3 + 5424));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 5416));
    r0 = (r0 | 1);
    r3 = (r4 + r5);
    r4_addr_3 = (r4 + r5);
    r4 = MemoryInline::FlatRead16(r4_addr_3);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 64), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 68), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f1.d);
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
}

loc_80565AA8:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8056581C func_8056581C preserves=true fpr_mask=0x00000000

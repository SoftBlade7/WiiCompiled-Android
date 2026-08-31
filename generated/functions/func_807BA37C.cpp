#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BA37C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807BA37C;

loc_807BA37C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r5 + 25296);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r4 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_807BA3AC:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BA3DC;
    }
}

loc_807BA3B8:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
}

loc_807BA3DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_807BA3E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_807BA3F4;
    }
}

loc_807BA3E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807BA3EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BA4F8;
    }
}

loc_807BA3F0:
{
    goto loc_807BA54C;
}

loc_807BA3F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 20));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807BA400:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BA438;
    }
}

loc_807BA408:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r6 = 0x809C0000u;
    r4 = MemoryInline::FlatRead16((r31 + 40));
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    r5 = MemoryInline::FlatRead8((r31 + 42));
    r3 = MemoryInline::FlatRead32((r6 + 13936));
    r6 = MemoryInline::FlatRead32((r31 + 28));
    r7 = MemoryInline::FlatRead8((r31 + 43));
    ctx->lr = 0x807BA42Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BB8D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 28));
    MemoryInline::FlatWrite32((r31 + 24), r0);
    MemoryInline::FlatWrite32((r31 + 28), r3);
}

loc_807BA438:
{
    r0 = MemoryInline::FlatRead8((r31 + 45));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BA440:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BA4A4;
    }
}

loc_807BA444:
{
    r4 = MemoryInline::FlatRead32(r31);
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8440));
    r29 = MemoryInline::FlatRead8((r4 + 24));
    r4 = r29;
    ctx->lr = 0x807BA45Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8065D568u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807BA460:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BA49C;
    }
}

loc_807BA464:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 45), static_cast<uint8_t>(r0));
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r30 + 8440));
    ctx->lr = 0x807BA478u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8065D21Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(20));
}

loc_807BA47C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BA49C;
    }
}

loc_807BA480:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_807BA488:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BA494;
    }
}

loc_807BA48C:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 32), r0);
}

loc_807BA494:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 46), static_cast<uint8_t>(r0));
}

loc_807BA49C:
{
    r3 = 0;
    goto loc_807BA550;
}

loc_807BA4A4:
{
    r5 = MemoryInline::FlatRead32((r31 + 8));
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_807BA4B0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807BA4EC;
    }
}

loc_807BA4B4:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = 0;
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 & 577);
}

loc_807BA4C4:
{
}

loc_807BA4C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(577))) {
        goto loc_807BA4E4;
    }
}

loc_807BA4CC:
{
}

loc_807BA4D0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(60))) {
        goto loc_807BA4E4;
    }
}

loc_807BA4D4:
{
    r0 = MemoryInline::FlatRead8((r31 + 44));
}

loc_807BA4DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807BA4E4;
    }
}

loc_807BA4E0:
{
    r4 = 1;
}

loc_807BA4E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807BA4E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BA54C;
    }
}

loc_807BA4EC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_807BA54C;
}

loc_807BA4F8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 20));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807BA504:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BA54C;
    }
}

loc_807BA50C:
{
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_807BA518:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BA530;
    }
}

loc_807BA51C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    goto loc_807BA54C;
}

loc_807BA530:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    r0 = 20;
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r3 = 1;
    goto loc_807BA550;
}

loc_807BA54C:
{
    r3 = 0;
}

loc_807BA550:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0000FFB gpr_write=0xE0000FFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807BA37C func_807BA37C preserves=true fpr_mask=0x00000000

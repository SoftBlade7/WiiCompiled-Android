#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80750808(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80750808;

loc_80750808:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r5 + 12000);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 704));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80750830:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8075084C;
    }
}

loc_8075083C:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 708));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80750844:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8075084C;
    }
}

loc_80750848:
{
    r0 = 1;
}

loc_8075084C:
{
}

loc_80750850:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8075085C;
    }
}

loc_80750854:
{
    f3.d = f1.d;
    goto loc_80750860;
}

loc_8075085C:
{
    f3.d = MemoryInline::FlatReadFloat32((r5 + 624));
}

loc_80750860:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 636));
    r0 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80750870:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80750884;
    }
}

loc_80750874:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 652));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8075087C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80750884;
    }
}

loc_80750880:
{
    r0 = 1;
}

loc_80750884:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80750888:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80750890;
    }
}

loc_8075088C:
{
    goto loc_80750894;
}

loc_80750890:
{
    f2.d = MemoryInline::FlatReadFloat32((r5 + 624));
}

loc_80750894:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    r4 = (r1 + 8);
    r7 = MemoryInline::FlatRead32((r3 + 60));
    r6 = 1;
    r5 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r7 = (r7 + -3);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r5 = (r5_rot_0 & 134217727);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    ctx->lr = 0x807508C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8074E030u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_807508CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80750904;
    }
}

loc_807508D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_807508D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80750914;
    }
}

loc_807508D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_807508DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80750924;
    }
}

loc_807508E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(3));
}

loc_807508E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80750934;
    }
}

loc_807508E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(4));
}

loc_807508EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80750944;
    }
}

loc_807508F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(5));
}

loc_807508F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80750954;
    }
}

loc_807508F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(6));
}

loc_807508FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80750964;
    }
}

loc_80750900:
{
    goto loc_80750970;
}

loc_80750904:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_80750970;
}

loc_80750914:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = 6;
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_80750970;
}

loc_80750924:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = 9;
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_80750970;
}

loc_80750934:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_80750970;
}

loc_80750944:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = 15;
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_80750970;
}

loc_80750954:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = 18;
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_80750970;
}

loc_80750964:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = 21;
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_80750970:
{
    MemoryInline::FlatWrite32((r30 + 60), r31);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 20));
    MemoryInline::FlatWrite8((r3 + 249), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF3F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80750808 func_80750808 preserves=true fpr_mask=0x00000000

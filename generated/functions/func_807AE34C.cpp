#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807AE34C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807AE34C;

loc_807AE34C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 712));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(10));
}

loc_807AE36C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807AE378;
    }
}

loc_807AE370:
{
    r3 = (r3 + 68);
    ctx->lr = 0x807AE378u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A61F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807AE378:
{
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 13904));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 13908));
    // inline leaf 0x8079ED1C (12 guest instruction(s))
}

loc_inl0_0x8079ED1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 104));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_inl0_0x8079ED24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl0_0x8079ED44;
    }
}

loc_inl0_0x8079ED28:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_inl0_0x8079ED34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl0_0x8079ED3C;
    }
}

loc_inl0_0x8079ED38:
{
    MemoryInline::FlatWriteFloat32((r3 + 104), f1.d);
}

loc_inl0_0x8079ED3C:
{
    r3 = 1;
    goto loc_inl0_cont_8079ED1C;
}

loc_inl0_0x8079ED44:
{
    r3 = 0;
}

loc_inl0_cont_8079ED1C:
{
    // end of inlined leaf 0x8079ED1C
}

loc_807AE394:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807AE3A0;
    }
}

loc_807AE398:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8079ED4Cu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_807AE3A0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(30));
}

loc_807AE3A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807AE3FC;
    }
}

loc_807AE3A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807AE3B8;
    }
}

loc_807AE3AC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 820), static_cast<uint8_t>(r0));
    goto loc_807AE3D4;
}

loc_807AE3B8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(42));
}

loc_807AE3BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807AE3D4;
    }
}

loc_807AE3C0:
{
    r3 = r30;
    ctx->lr = 0x807AE3C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079EECCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 124));
    r0 = (r0 | 16777216);
    MemoryInline::FlatWrite32((r30 + 124), r0);
}

loc_807AE3D4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(85));
}

loc_807AE3D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807AE3FC;
    }
}

loc_807AE3DC:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r4 = r30;
    r0 = (r0 * 36);
    r3 = (r3 + r0);
    r3 = (r3 + 72);
    ctx->lr = 0x807AE3FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80795F68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807AE3FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807AE34C func_807AE34C preserves=true fpr_mask=0x00000000

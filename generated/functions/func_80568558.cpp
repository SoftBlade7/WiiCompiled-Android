#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80568558(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80568558;

loc_80568558:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r8 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r8 = (r8 + 5448);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8056857C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80568608;
    }
}

loc_80568580:
{
    f4.d = MemoryInline::FlatReadFloat32((r3 + 208));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 144));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8056858C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80568608;
    }
}

loc_80568594:
{
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32(r8);
    r4 = (r0 * 24);
    MemoryInline::FlatWriteFloat32((r3 + 208), f0.d);
    r0 = (r8 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    r7 = 1;
    r6 = MemoryInline::FlatRead16((r3 + 204));
    r5 = (r0 + r4);
    r0 = (r6 | 2);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 20));
    r31 = 1;
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    MemoryInline::FlatWrite32((r3 + 32), r7);
    r4 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite16((r3 + 204), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r3 + 228), r5);
    MemoryInline::FlatWriteFloat32((r3 + 224), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 212), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 220), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 216), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 208), f4.d);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805685FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80568608;
    }
}

loc_80568600:
{
    r4 = 0;
    // inline leaf 0x805917F4 (13 guest instruction(s))
}

loc_inl0_0x805917F4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80591804:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80591808:
{
    r3 = MemoryInline::FlatRead32((r5 + 60));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r3 ^ r0);
    MemoryInline::FlatWrite32((r4 + 20), r0);
    goto loc_inl0_cont_805917F4;
}

loc_inl0_return:
{
}

loc_inl0_cont_805917F4:
{
    // end of inlined leaf 0x805917F4
}

loc_80568608:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800001FB gpr_write=0x800001FB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80568558 func_80568558 preserves=true fpr_mask=0x00000000

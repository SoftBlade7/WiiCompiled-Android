#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A06E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A06E0;

loc_805A06E0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r4 = MemoryInline::FlatRead32((r6 + 6552));
    r0 = MemoryInline::FlatRead32((r4 + 28));
}

loc_805A070C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A079C;
    }
}

loc_805A0710:
{
    r0 = MemoryInline::FlatRead8((r4 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A0718:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A084C;
    }
}

loc_805A071C:
{
    r4 = MemoryInline::FlatRead8((r3 + 512));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_805A0724:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A084C;
    }
}

loc_805A0728:
{
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 512), static_cast<uint8_t>(r4));
    r3 = 0x80890000u;
    r0 = 0;
    r6 = MemoryInline::FlatRead32((r6 + 6552));
    r5 = (r4 & 255);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & 1020);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8232));
    MemoryInline::FlatWrite32((r6 + 40), r5);
    r3 = (r6 + r4);
    r3 = (r3 + 16);
    r31 = 0;
    MemoryInline::FlatWrite32((r6 + 28), r3);
    r30 = 0x809C0000u;
    MemoryInline::FlatWriteFloat32((r6 + 32), f0.d);
    MemoryInline::FlatWrite8((r6 + 36), static_cast<uint8_t>(r0));
    goto loc_805A0784;
}

loc_805A076C:
{
    r3 = MemoryInline::FlatRead32((r30 + 6392));
    r4 = (r31 & 255);
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x80590100
    r4 = 1;
    ctx->lr = 0x805A0780u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059170Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = (r31 + 1);
}

loc_805A0784:
{
    r3 = MemoryInline::FlatRead32((r30 + 6392));
    r4 = (r31 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_805A0794:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805A076C;
    }
}

loc_805A0798:
{
    goto loc_805A084C;
}

loc_805A079C:
{
    r5 = 0;
    MemoryInline::FlatWrite8((r4 + 37), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead8((r3 + 513));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A07AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A07B8;
    }
}

loc_805A07B0:
{
    ctx->lr = 0x805A07B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AB57Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805A081C;
}

loc_805A07B8:
{
    r4 = MemoryInline::FlatRead8((r3 + 512));
    r3 = 0x80890000u;
    r6 = MemoryInline::FlatRead32((r6 + 6552));
    r29 = 0;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8232));
    r3 = (r6 + r0);
    MemoryInline::FlatWrite32((r6 + 40), r4);
    r0 = (r3 + 16);
    r30 = 0x809C0000u;
    MemoryInline::FlatWrite32((r6 + 28), r0);
    MemoryInline::FlatWriteFloat32((r6 + 32), f0.d);
    MemoryInline::FlatWrite8((r6 + 36), static_cast<uint8_t>(r5));
    goto loc_805A0808;
}

loc_805A07F0:
{
    r3 = MemoryInline::FlatRead32((r30 + 6392));
    r4 = (r29 & 255);
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // end of inlined leaf 0x80590100
    r4 = 1;
    ctx->lr = 0x805A0804u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059170Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = (r29 + 1);
}

loc_805A0808:
{
    r3 = MemoryInline::FlatRead32((r30 + 6392));
    r4 = (r29 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_805A0818:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805A07F0;
    }
}

loc_805A081C:
{
    r0 = MemoryInline::FlatRead8((r31 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A0824:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A084C;
    }
}

loc_805A0828:
{
    r0 = MemoryInline::FlatRead8((r31 + 513));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A0830:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A0844;
    }
}

loc_805A0834:
{
    r3 = 0x809C0000u;
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 6552));
    MemoryInline::FlatWrite8((r3 + 37), static_cast<uint8_t>(r0));
}

loc_805A0844:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 513), static_cast<uint8_t>(r0));
}

loc_805A084C:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805A06E0 func_805A06E0 preserves=true fpr_mask=0x00000000

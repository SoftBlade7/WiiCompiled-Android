#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80595AF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80595AF8;

loc_80595AF8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80595B04:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80595B84;
    }
}

loc_80595B1C:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r3 = (r3 + 612);
    ctx->lr = 0x80595B2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805890B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r0 = MemoryInline::FlatRead32((r5 + 2928));
}

loc_80595B44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80595B60;
    }
}

loc_80595B48:
{
    r0 = MemoryInline::FlatRead16((r5 + 2974));
}

loc_80595B50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80595B60;
    }
}

loc_80595B54:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_80595B60:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80595B74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80595C44;
    }
}

loc_80595B78:
{
    r4 = 28;
    // inline leaf 0x805917C0 (13 guest instruction(s))
}

loc_inl1_0x805917C0:
{
    r5 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x805917D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x805917D4:
{
    r3 = MemoryInline::FlatRead32((r5 + 60));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 ^ r0);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    goto loc_inl1_cont_805917C0;
}

loc_inl1_return:
{
}

loc_inl1_cont_805917C0:
{
    // end of inlined leaf 0x805917C0
    goto loc_80595C44;
}

loc_80595B84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80595B88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80595C10;
    }
}

loc_80595B8C:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r4 = 0x808B0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r4 = (r4 + 25848);
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 4));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    ctx->lr = 0x80595BACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8058212Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r0 = MemoryInline::FlatRead32((r5 + 2928));
}

loc_80595BC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80595BE0;
    }
}

loc_80595BC8:
{
    r0 = MemoryInline::FlatRead16((r5 + 2974));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_80595BD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80595BE0;
    }
}

loc_80595BD4:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r4 = r30;
    ctx->lr = 0x80595BE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8053DB34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80595BE0:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80595BF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80595C44;
    }
}

loc_80595BF8:
{
    r4 = 27;
    // inline leaf 0x805917C0 (13 guest instruction(s))
}

loc_inl3_0x805917C0:
{
    r5 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x805917D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x805917D4:
{
    r3 = MemoryInline::FlatRead32((r5 + 60));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 ^ r0);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    goto loc_inl3_cont_805917C0;
}

loc_inl3_return:
{
}

loc_inl3_cont_805917C0:
{
    // end of inlined leaf 0x805917C0
    r3 = MemoryInline::FlatRead32((r31 + 24));
    // inline leaf 0x80591440 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 60));
    // end of inlined leaf 0x80591440
    MemoryInline::FlatWrite8((r3 + 87), static_cast<uint8_t>(r30));
    goto loc_80595C44;
}

loc_80595C10:
{
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r0 = MemoryInline::FlatRead32((r5 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80595C28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80595C44;
    }
}

loc_80595C2C:
{
    r0 = MemoryInline::FlatRead16((r5 + 2974));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_80595C34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80595C44;
    }
}

loc_80595C38:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_80595C44:
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
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80595AF8 func_80595AF8 preserves=true fpr_mask=0x00000000

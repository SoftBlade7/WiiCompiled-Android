#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BB9EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807BB9EC;

loc_807BB9EC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    // inline leaf 0x80533090 (12 guest instruction(s))
}

loc_inl0_0x80533090:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_inl0_0x805330A0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(11))) {
        goto loc_inl0_0x805330B4;
    }
}

loc_inl0_0x805330A4:
{
}

loc_inl0_0x805330A8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(12))) {
        goto loc_inl0_0x805330B4;
    }
}

loc_inl0_0x805330AC:
{
    r3 = 0;
    goto loc_inl0_cont_80533090;
}

loc_inl0_0x805330B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (240 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(240) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_inl0_cont_80533090:
{
    // end of inlined leaf 0x80533090
}

loc_807BBA10:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807BBA30;
    }
}

loc_807BBA14:
{
    r4 = 1800;
    r3 = 900;
    r0 = 1200;
    MemoryInline::FlatWrite32((r31 + 52), r4);
    MemoryInline::FlatWrite32((r31 + 56), r4);
    MemoryInline::FlatWrite32((r31 + 60), r3);
    MemoryInline::FlatWrite32((r31 + 64), r0);
}

loc_807BBA30:
{
    r3 = MemoryInline::FlatRead32((r31 + 52));
}

loc_807BBA38:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_807BBA44;
    }
}

loc_807BBA3C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 52), r0);
}

loc_807BBA44:
{
    r3 = MemoryInline::FlatRead32((r31 + 56));
}

loc_807BBA4C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_807BBA58;
    }
}

loc_807BBA50:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 56), r0);
}

loc_807BBA58:
{
    r3 = MemoryInline::FlatRead32((r31 + 60));
}

loc_807BBA60:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_807BBA6C;
    }
}

loc_807BBA64:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 60), r0);
}

loc_807BBA6C:
{
    r3 = MemoryInline::FlatRead32((r31 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807BBA74:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807BBA80;
    }
}

loc_807BBA78:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 64), r0);
}

loc_807BBA80:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807BB9EC func_807BB9EC preserves=true fpr_mask=0x00000000

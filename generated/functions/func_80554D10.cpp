#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80554D10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80554D10;

loc_80554D10:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r3 + 6560));
}

loc_80554D28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80554D34;
    }
}

loc_80554D2C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 6560), static_cast<uint8_t>(r0));
}

loc_80554D34:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 6260));
    r0 = (r0 & 1);
}

loc_80554D40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80554D50;
    }
}

loc_80554D44:
{
    r0 = MemoryInline::FlatRead32((r3 + 6260));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r3 + 6260), r0);
}

loc_80554D50:
{
    // inline leaf 0x8078DDB4 (12 guest instruction(s))
}

loc_inl0_0x8078DDB4:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r4 + 12092));
}

loc_inl0_0x8078DDC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8078DDDC;
    }
}

loc_inl0_0x8078DDC8:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10504));
    r0 = MemoryInline::FlatRead8((r4 + 76));
}

loc_inl0_0x8078DDD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8078DDDC:
{
    r3 = 1;
    goto loc_inl0_cont_8078DDB4;
}

loc_inl0_return:
{
}

loc_inl0_cont_8078DDB4:
{
    // end of inlined leaf 0x8078DDB4
}

loc_80554D58:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80554D68;
    }
}

loc_80554D5C:
{
    r3 = 0x809C0000u;
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 12092), static_cast<uint8_t>(r0));
}

loc_80554D68:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 8664));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80554D74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80554D80;
    }
}

loc_80554D78:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 8664), static_cast<uint8_t>(r0));
}

loc_80554D80:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80554D10 func_80554D10 preserves=true fpr_mask=0x00000000

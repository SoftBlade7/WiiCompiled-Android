#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80005F34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r5_addic_src_3 = 0;
    uint32_t r5_addic_src_4 = 0;
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_2 = 0;
    uint32_t r6_stbu_ea_3 = 0;
    uint32_t r6_stbu_ea_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80005F34;

loc_80005F34:
{
}

loc_80005F38:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r3))) {
        goto loc_80005F60;
    }
}

loc_80005F3C:
{
    r4 = (r4 + -1);
    r6 = (r3 + -1);
    r5 = (r5 + 1);
    goto loc_80005F54;
}

loc_80005F4C:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead8(r4);
    r6_stbu_ea_2 = (r6 + 1);
    MemoryInline::FlatWrite8(r6_stbu_ea_2, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_2;
}

loc_80005F54:
{
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80005F58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80005F4C;
    }
}

loc_80005F5C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80005F60:
{
    r4 = (r4 + r5);
    r6 = (r3 + r5);
    r5 = (r5 + 1);
    goto loc_80005F78;
}

loc_80005F70:
{
    r4 = (r4 + -1);
    r0 = MemoryInline::FlatRead8(r4);
    r6_stbu_ea_4 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_4, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_4;
}

loc_80005F78:
{
    r5_addic_src_4 = r5;
    r5 = (r5_addic_src_4 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_4)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80005F7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80005F70;
    }
}

loc_80005F80:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80005F34 func_80005F34 preserves=true fpr_mask=0x00000000

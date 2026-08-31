#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D2DEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D2DEC;

loc_807D2DEC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r3 + 330));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D2E00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D2E10;
    }
}

loc_807D2E04:
{
    r0 = MemoryInline::FlatRead8((r3 + 324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D2E0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D2E18;
    }
}

loc_807D2E10:
{
    r3 = 0;
    goto loc_807D2E68;
}

loc_807D2E18:
{
    r0 = MemoryInline::FlatRead16((r3 + 250));
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 332));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D2E28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D2E64;
    }
}

loc_807D2E2C:
{
    r0 = MemoryInline::FlatRead16((r3 + 252));
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 332));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D2E3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D2E64;
    }
}

loc_807D2E40:
{
    r0 = MemoryInline::FlatRead8((r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D2E48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D2E58;
    }
}

loc_807D2E4C:
{
    r3 = MemoryInline::FlatRead32((r3 + 108));
    // inline leaf 0x8055F27C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead16((r3 + 56));
    r3 = (r0 & 1);
    // end of inlined leaf 0x8055F27C
    goto loc_807D2E5C;
}

loc_807D2E58:
{
    r3 = 0;
}

loc_807D2E5C:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_807D2E64:
{
    r3 = r0;
}

loc_807D2E68:
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

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D2DEC func_807D2DEC preserves=true fpr_mask=0x00000000

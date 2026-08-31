#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807AA608(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807AA608;

loc_807AA608:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 & 32768);
}

loc_807AA610:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807AA61C;
    }
}

loc_807AA614:
{
    r0 = MemoryInline::FlatRead8((r3 + 108));
    goto loc_807AA620;
}

loc_807AA61C:
{
    r0 = 12;
}

loc_807AA620:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
}

loc_807AA624:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807AA630;
    }
}

loc_807AA628:
{
    r3 = 12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_807AA630:
{
    r3 = 0x809C0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r4 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = MemoryInline::FlatRead8((r3 + 32));
    r0 = (r3 + -1);
    r5 = (r0 & 255);
}

loc_807AA654:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(1))) {
        goto loc_807AA660;
    }
}

loc_807AA658:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead8((r3 + 14520));
}

loc_807AA660:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 14520));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807AA66C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807AA680;
    }
}

loc_807AA670:
{
    r0 = MemoryInline::FlatRead32((r4 + 24));
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead8((r3 + -1));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_807AA680:
{
    r3 = 12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807AA608 func_807AA608 preserves=true fpr_mask=0x00000000

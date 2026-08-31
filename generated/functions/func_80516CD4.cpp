#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80516CD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80516CD4;

loc_80516CD4:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80516CEC;
    }
}

loc_80516CE4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80516CEC:
{
    r3 = 0x809C0000u;
    r4 = (r5 & 65535);
    r6 = MemoryInline::FlatRead32((r3 + -10520));
    r3 = MemoryInline::FlatRead32((r6 + 48));
}

loc_80516D00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80516D0C;
    }
}

loc_80516D04:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80516D10;
}

loc_80516D0C:
{
    r0 = 0;
}

loc_80516D10:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80516D14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80516D44;
    }
}

loc_80516D18:
{
    r4 = MemoryInline::FlatRead32((r6 + 48));
    r3 = (r5 & 65535);
    r0 = MemoryInline::FlatRead16((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80516D28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80516D3C;
    }
}

loc_80516D2C:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 262140);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80516D3C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_80516D44:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80516CD4 func_80516CD4 preserves=true fpr_mask=0x00000000

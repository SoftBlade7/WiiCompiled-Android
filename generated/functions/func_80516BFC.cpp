#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80516BFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80516BFC;

loc_80516BFC:
{
    r5 = MemoryInline::FlatRead32((r3 + 44));
}

loc_80516C04:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80516C10;
    }
}

loc_80516C08:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    goto loc_80516C14;
}

loc_80516C10:
{
    r0 = 0;
}

loc_80516C14:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80516C18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80516CCC;
    }
}

loc_80516C1C:
{
}

loc_80516C20:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80516C2C;
    }
}

loc_80516C24:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    goto loc_80516C30;
}

loc_80516C2C:
{
    r0 = 0;
}

loc_80516C30:
{
}

loc_80516C34:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80516C5C;
    }
}

loc_80516C38:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
}

loc_80516C40:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80516C54;
    }
}

loc_80516C44:
{
    r5 = MemoryInline::FlatRead32(r5);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 262140);
    r5_addr_1 = (r5 + r0);
    r4 = MemoryInline::FlatRead32(r5_addr_1);
    goto loc_80516C60;
}

loc_80516C54:
{
    r4 = 0;
    goto loc_80516C60;
}

loc_80516C5C:
{
    r4 = 0;
}

loc_80516C60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80516C64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80516CCC;
    }
}

loc_80516C68:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80516CCC;
    }
}

loc_80516C78:
{
    r5 = MemoryInline::FlatRead32((r3 + 48));
    r3 = (r4 & 65535);
}

loc_80516C84:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80516C90;
    }
}

loc_80516C88:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    goto loc_80516C94;
}

loc_80516C90:
{
    r0 = 0;
}

loc_80516C94:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80516C98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80516CC4;
    }
}

loc_80516C9C:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r3 = (r4 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80516CA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80516CBC;
    }
}

loc_80516CAC:
{
    r3 = MemoryInline::FlatRead32(r5);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 262140);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80516CBC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80516CC4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80516CCC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80516BFC func_80516BFC preserves=true fpr_mask=0x00000000

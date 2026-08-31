#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80535D14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80535D14;

loc_80535D14:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + -10520));
    r3 = MemoryInline::FlatRead32((r4 + 32));
}

loc_80535D24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80535D30;
    }
}

loc_80535D28:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80535D34;
}

loc_80535D30:
{
    r3 = 0;
}

loc_80535D34:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_80535D40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80535D68;
    }
}

loc_80535D44:
{
    r3 = MemoryInline::FlatRead32((r4 + 28));
}

loc_80535D4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80535D58;
    }
}

loc_80535D50:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80535D5C;
}

loc_80535D58:
{
    r3 = 0;
}

loc_80535D5C:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_80535D68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80535D6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80535D78;
    }
}

loc_80535D70:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80535D78:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + -10456));
    r7 = 0;
    r4 = MemoryInline::FlatRead32((r3 + -10448));
    r5 = MemoryInline::FlatRead8((r6 + 36));
    r6 = (r6 + 40);
    goto loc_80535DD4;
}

loc_80535D98:
{
    r0 = (r7 & 255);
    r0 = (r0 * 240);
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_80535DAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80535DD0;
    }
}

loc_80535DB0:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80535DC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80535DD0;
    }
}

loc_80535DC8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80535DD0:
{
    r7 = (r7 + 1);
}

loc_80535DD4:
{
    r0 = (r7 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_80535DDC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80535D98;
    }
}

loc_80535DE0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000D9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80535D14 func_80535D14 preserves=true fpr_mask=0x00000000

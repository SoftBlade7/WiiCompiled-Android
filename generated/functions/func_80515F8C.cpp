#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80515F8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80515F8C;

loc_80515F8C:
{
    r6 = 0;
    goto loc_80515FC4;
}

loc_80515F94:
{
    r0 = (r6 & 65535);
}

loc_80515F9C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_80515FB0;
    }
}

loc_80515FA0:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r4_addr_2 = (r4 + r0);
    r5 = MemoryInline::FlatRead32(r4_addr_2);
    goto loc_80515FB4;
}

loc_80515FB0:
{
    r5 = 0;
}

loc_80515FB4:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 262140);
    r6 = (r6 + 1);
    r4_addr_4 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_4, r5);
}

loc_80515FC4:
{
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r6 & 65535);
}

loc_80515FD0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_80515F94;
    }
}

loc_80515FD4:
{
    r9 = 1;
    r5 = 4;
    goto loc_80516040;
}

loc_80515FE0:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r10 = r9;
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & -4);
    r4_addr_6 = (r4 + r5);
    r11 = MemoryInline::FlatRead32(r4_addr_6);
    goto loc_80516000;
}

loc_80515FF4:
{
    MemoryInline::FlatWrite32(r8, r7);
    r6 = (r6 + -4);
    r10 = (r10 + -1);
}

loc_80516000:
{
}

loc_80516004:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(0))) {
        goto loc_8051602C;
    }
}

loc_80516008:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r4 = MemoryInline::FlatRead32((r11 + 4));
    r8 = (r0 + r6);
    r7 = MemoryInline::FlatRead32((r8 + -4));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r4 = MemoryInline::FlatRead32((r7 + 4));
    r4 = MemoryInline::FlatRead8((r4 + 3));
}

loc_80516028:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_80515FF4;
    }
}

loc_8051602C:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r5 = (r5 + 4);
    r9 = (r9 + 1);
    r4_addr_7 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_7, r11);
}

loc_80516040:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(r0));
}

loc_80516048:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80515FE0;
    }
}

loc_8051604C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80515F8C func_80515F8C preserves=true fpr_mask=0x00000000

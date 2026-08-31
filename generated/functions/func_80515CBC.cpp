#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80515CBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80515CBC;

loc_80515CBC:
{
    r6 = MemoryInline::FlatRead32((r3 + 28));
    r7 = 0;
    r9 = MemoryInline::FlatRead16((r6 + 4));
    goto loc_80515D28;
}

loc_80515CCC:
{
    r0 = (r7 & 65535);
}

loc_80515CD4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r9))) {
        goto loc_80515CE8;
    }
}

loc_80515CD8:
{
    r3 = MemoryInline::FlatRead32(r6);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_80515CEC;
}

loc_80515CE8:
{
    r3 = 0;
}

loc_80515CEC:
{
    r10 = MemoryInline::FlatRead32(r3);
    r8 = 0;
    r5 = MemoryInline::FlatRead8(r10);
}

loc_80515CFC:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r4))) {
        goto loc_80515D1C;
    }
}

loc_80515D00:
{
    r0 = MemoryInline::FlatRead8((r10 + 1));
    r5 = (r5 + r0);
    r0 = (r5 + -1);
    r0 = (r0 & 255);
}

loc_80515D14:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_80515D1C;
    }
}

loc_80515D18:
{
    r8 = 1;
}

loc_80515D1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80515D20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80515D24:
{
    r7 = (r7 + 1);
}

loc_80515D28:
{
    r0 = (r7 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r9));
}

loc_80515D30:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80515CCC;
    }
}

loc_80515D34:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80515CBC func_80515CBC preserves=true fpr_mask=0x00000000

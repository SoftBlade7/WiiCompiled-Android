#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079B338(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079B338;

loc_8079B338:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079B33C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079B390;
    }
}

loc_8079B340:
{
}

loc_8079B344:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8079B35C;
    }
}

loc_8079B348:
{
    r0 = MemoryInline::FlatRead8(r5);
    r7 = MemoryInline::FlatRead16(r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_1 & -4096);
    r0 = (r7 | r0);
    r7 = (r0 & 65535);
}

loc_8079B35C:
{
}

loc_8079B360:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8079B36C;
    }
}

loc_8079B364:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r7));
    goto loc_8079B370;
}

loc_8079B36C:
{
    r7 = MemoryInline::FlatRead16(r3);
}

loc_8079B370:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8079B374:
{
    r3 = (r3 + 2);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8079B37C:
{
    r0 = (r7 & 4095);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(20));
    r0 = (r0_rot_3 & 15);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8079B390:
{
    r3 = (r3 + 2);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x00000089 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079B338 func_8079B338 preserves=true fpr_mask=0x00000000

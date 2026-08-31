#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F232C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801F232C;

loc_801F232C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F2330:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F233C;
    }
}

loc_801F2334:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F2338:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F2344;
    }
}

loc_801F233C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801F2344:
{
    r8 = (r3 & 255);
    r0 = (r3 & 65280);
}

loc_801F2350:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(26))) {
        goto loc_801F235C;
    }
}

loc_801F2354:
{
}

loc_801F2358:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(768))) {
        goto loc_801F2364;
    }
}

loc_801F235C:
{
    r3 = 1;
    goto loc_801F23F0;
}

loc_801F2364:
{
    r5 = (r8 * 56);
    r6 = 0x80360000u;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r7 = (r7_rot_0 & 65535);
    r6 = (r6 + -23936);
    r5 = (r6 + r5);
    r0 = 13;
    r5 = (r5 + 420);
    r3 = 0;
    ctr = r0;
}

loc_801F2388:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 524280);
    r9 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 8));
}

loc_801F2398:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_801F23A8;
    }
}

loc_801F239C:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
}

loc_801F23A4:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F23D4;
    }
}

loc_801F23A8:
{
    r3 = (r3 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 524280);
    r9 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 8));
}

loc_801F23BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_801F23CC;
    }
}

loc_801F23C0:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
}

loc_801F23C8:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F23D4;
    }
}

loc_801F23CC:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F2388;
    }
}

loc_801F23D4:
{
    r5 = (r3 & 65535);
    r3 = 26;
    r0 = (r5 + -26);
    r3 = (r5 | ~r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
}

loc_801F23F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F23F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_801F23F8:
{
    r0 = (r8 * 56);
    r3 = 0x80360000u;
    r3 = (r3 + -23936);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 420));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F2410:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F2420;
    }
}

loc_801F2414:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_801F2428;
}

loc_801F2420:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_801F2428:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F232C func_801F232C preserves=true fpr_mask=0x00000000

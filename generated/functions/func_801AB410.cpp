#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AB410(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801AB410;

loc_801AB410:
{
    r6 = MemoryInline::FlatRead8(r3);
}

loc_801AB418:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801AB420;
    }
}

loc_801AB41C:
{
    r3 = (r3 + 1);
}

loc_801AB420:
{
    r0 = (r6 & 128);
}

loc_801AB424:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801AB430;
    }
}

loc_801AB428:
{
    r7 = 0;
    goto loc_801AB480;
}

loc_801AB430:
{
    r0 = (r6 & 224);
}

loc_801AB438:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(192))) {
        goto loc_801AB448;
    }
}

loc_801AB43C:
{
    r6 = (r6 & 31);
    r7 = 1;
    goto loc_801AB480;
}

loc_801AB448:
{
    r0 = (r6 & 240);
}

loc_801AB450:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(224))) {
        goto loc_801AB460;
    }
}

loc_801AB454:
{
    r6 = (r6 & 15);
    r7 = 2;
    goto loc_801AB480;
}

loc_801AB460:
{
    r0 = (r6 & 248);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(240));
}

loc_801AB468:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AB478;
    }
}

loc_801AB46C:
{
    r6 = (r6 & 7);
    r7 = 3;
    goto loc_801AB480;
}

loc_801AB478:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801AB480:
{
    ctr = r7;
}

loc_801AB488:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(0))) {
        goto loc_801AB4B8;
    }
}

loc_801AB48C:
{
    r5 = MemoryInline::FlatRead8(r3);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(6));
    r6 = (r6_rot_2 & -64);
    r3 = (r3 + 1);
    r0 = (r5 & 192);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(128));
}

loc_801AB4A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AB4AC;
    }
}

loc_801AB4A4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801AB4AC:
{
    r0 = (r5 & 63);
    r6 = (r6 | r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801AB48C;
    }
}

loc_801AB4B8:
{
}

loc_801AB4BC:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(127))) {
        goto loc_801AB4D0;
    }
}

loc_801AB4C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801AB4C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AB500;
    }
}

loc_801AB4C8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801AB4D0:
{
}

loc_801AB4D4:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(2047))) {
        goto loc_801AB4E8;
    }
}

loc_801AB4D8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
}

loc_801AB4DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AB500;
    }
}

loc_801AB4E0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801AB4E8:
{
}

loc_801AB4EC:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(65535))) {
        goto loc_801AB500;
    }
}

loc_801AB4F0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
}

loc_801AB4F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AB500;
    }
}

loc_801AB4F8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801AB500:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(55296));
}

loc_801AB504:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801AB518;
    }
}

loc_801AB508:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(57343));
}

loc_801AB50C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801AB518;
    }
}

loc_801AB510:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801AB518:
{
    MemoryInline::FlatWrite32(r4, r6);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801AB410 func_801AB410 preserves=true fpr_mask=0x00000000

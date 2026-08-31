#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019F33C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8019F33C;

loc_8019F33C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r3 = MemoryInline::FlatRead32((r13 + -25456));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8019F354:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019F364;
    }
}

loc_8019F358:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8019F360:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019F370;
    }
}

loc_8019F364:
{
    r3 = 268435456;
    r3 = (r3 + 2);
    goto loc_8019F5AC;
}

loc_8019F370:
{
    r3 = 0x80000000u;
    r0 = MemoryInline::FlatRead16((r3 + 12518));
    r31 = MemoryInline::FlatRead32((r3 + 12600));
    r0 = (r0 & 32768);
}

loc_8019F380:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019F4BC;
    }
}

loc_8019F384:
{
    r0 = MemoryInline::FlatRead16((r3 + 12518));
    r0 = (r0 & -32769);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(515));
}

loc_8019F390:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019F3C4;
    }
}

loc_8019F394:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019F3B8;
    }
}

loc_8019F398:
{
}

loc_8019F39C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_8019F3AC;
    }
}

loc_8019F3A0:
{
}

loc_8019F3A4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_8019F3C4;
    }
}

loc_8019F3A8:
{
    goto loc_8019F4BC;
}

loc_8019F3AC:
{
}

loc_8019F3B0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(513))) {
        goto loc_8019F430;
    }
}

loc_8019F3B4:
{
    goto loc_8019F4BC;
}

loc_8019F3B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(768));
}

loc_8019F3BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019F4B4;
    }
}

loc_8019F3C0:
{
    goto loc_8019F4BC;
}

loc_8019F3C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_8019F3C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019F408;
    }
}

loc_8019F3CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019F3E0;
    }
}

loc_8019F3D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8019F3D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019F3F8;
    }
}

loc_8019F3D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019F400;
    }
}

loc_8019F3DC:
{
    goto loc_8019F420;
}

loc_8019F3E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(17));
}

loc_8019F3E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019F418;
    }
}

loc_8019F3E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019F420;
    }
}

loc_8019F3EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(16));
}

loc_8019F3F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019F410;
    }
}

loc_8019F3F4:
{
    goto loc_8019F420;
}

loc_8019F3F8:
{
    r3 = 16;
    goto loc_8019F5AC;
}

loc_8019F400:
{
    r3 = 17;
    goto loc_8019F5AC;
}

loc_8019F408:
{
    r3 = 18;
    goto loc_8019F5AC;
}

loc_8019F410:
{
    r3 = 32;
    goto loc_8019F5AC;
}

loc_8019F418:
{
    r3 = 33;
    goto loc_8019F5AC;
}

loc_8019F420:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(17));
}

loc_8019F424:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019F430;
    }
}

loc_8019F428:
{
    r3 = 33;
    goto loc_8019F5AC;
}

loc_8019F430:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_8019F434:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019F47C;
    }
}

loc_8019F438:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019F44C;
    }
}

loc_8019F43C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8019F440:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019F464;
    }
}

loc_8019F444:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019F470;
    }
}

loc_8019F448:
{
    goto loc_8019F4A0;
}

loc_8019F44C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(17));
}

loc_8019F450:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019F494;
    }
}

loc_8019F454:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019F4A0;
    }
}

loc_8019F458:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(16));
}

loc_8019F45C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019F488;
    }
}

loc_8019F460:
{
    goto loc_8019F4A0;
}

loc_8019F464:
{
    r3 = 268435456;
    r3 = (r3 + 16);
    goto loc_8019F5AC;
}

loc_8019F470:
{
    r3 = 268435456;
    r3 = (r3 + 17);
    goto loc_8019F5AC;
}

loc_8019F47C:
{
    r3 = 268435456;
    r3 = (r3 + 18);
    goto loc_8019F5AC;
}

loc_8019F488:
{
    r3 = 268435456;
    r3 = (r3 + 32);
    goto loc_8019F5AC;
}

loc_8019F494:
{
    r3 = 268435456;
    r3 = (r3 + 33);
    goto loc_8019F5AC;
}

loc_8019F4A0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(17));
}

loc_8019F4A4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019F4B4;
    }
}

loc_8019F4A8:
{
    r3 = 268435456;
    r3 = (r3 + 33);
    goto loc_8019F5AC;
}

loc_8019F4B4:
{
    r3 = 256;
    goto loc_8019F5AC;
}

loc_8019F4BC:
{
    // inline leaf 0x801A75DC (3 guest instruction(s))
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 12568));
    // end of inlined leaf 0x801A75DC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_8019F4C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019F52C;
    }
}

loc_8019F4C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019F4DC;
    }
}

loc_8019F4CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8019F4D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019F4F4;
    }
}

loc_8019F4D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019F510;
    }
}

loc_8019F4D8:
{
    goto loc_8019F580;
}

loc_8019F4DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(17));
}

loc_8019F4E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019F564;
    }
}

loc_8019F4E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019F580;
    }
}

loc_8019F4E8:
{
}

loc_8019F4EC:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(16))) {
        goto loc_8019F548;
    }
}

loc_8019F4F0:
{
    goto loc_8019F580;
}

loc_8019F4F4:
{
    r0 = (r3 + -67108864);
    r3 = 268435456;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_8019F500:
{
    r3 = (r3 + 16);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019F5AC;
    }
}

loc_8019F508:
{
    r3 = 16;
    goto loc_8019F5AC;
}

loc_8019F510:
{
    r0 = (r3 + -67108864);
    r3 = 268435456;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_8019F51C:
{
    r3 = (r3 + 17);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019F5AC;
    }
}

loc_8019F524:
{
    r3 = 17;
    goto loc_8019F5AC;
}

loc_8019F52C:
{
    r0 = (r3 + -67108864);
    r3 = 268435456;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_8019F538:
{
    r3 = (r3 + 18);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019F5AC;
    }
}

loc_8019F540:
{
    r3 = 18;
    goto loc_8019F5AC;
}

loc_8019F548:
{
    r0 = (r3 + -67108864);
    r3 = 268435456;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_8019F554:
{
    r3 = (r3 + 32);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019F5AC;
    }
}

loc_8019F55C:
{
    r3 = 32;
    goto loc_8019F5AC;
}

loc_8019F564:
{
    r0 = (r3 + -67108864);
    r3 = 268435456;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_8019F570:
{
    r3 = (r3 + 33);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019F5AC;
    }
}

loc_8019F578:
{
    r3 = 33;
    goto loc_8019F5AC;
}

loc_8019F580:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(17));
}

loc_8019F584:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019F5A4;
    }
}

loc_8019F588:
{
    r0 = (r3 + -67108864);
    r3 = 268435456;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_8019F594:
{
    r3 = (r3 + 33);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019F5AC;
    }
}

loc_8019F59C:
{
    r3 = 33;
    goto loc_8019F5AC;
}

loc_8019F5A4:
{
    r3 = MemoryInline::FlatRead32((r13 + -25456));
    r3 = MemoryInline::FlatRead32((r3 + 44));
}

loc_8019F5AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000200B gpr_write=0x8000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019F33C func_8019F33C preserves=true fpr_mask=0x00000000

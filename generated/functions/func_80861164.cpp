#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80861164(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80861164;

loc_80861164:
{
}

loc_80861168:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_8086118C;
    }
}

loc_8086116C:
{
    r4 = MemoryInline::FlatRead16((r7 + 54));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = 65536;
    r0 = (r3 + -27664);
    r3 = (r4 & 255);
    r0 = (r0 * r3);
    r3 = (r7 + r0);
    r3 = (r3 + 56);
    goto loc_80861190;
}

loc_8086118C:
{
    r3 = 0;
}

loc_80861190:
{
    r3 = (r3 + 65536);
    r4 = 52;
    r3 = (r3 + -28680);
    // inline leaf 0x8054994C (12 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r4 = (r4 & 31);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = 1;
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8054994C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808611A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808611B0;
    }
}

loc_808611A8:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808611B0:
{
    r3 = 0x809C0000u;
    r0 = 4;
    r7 = MemoryInline::FlatRead32((r3 + -10424));
    r8 = 0;
    r3 = 0;
    r5 = 65536;
    ctr = r0;
}

loc_808611CC:
{
    r0 = MemoryInline::FlatRead16((r7 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808611D4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808611F0;
    }
}

loc_808611D8:
{
    r4 = (r0 & 255);
    r0 = (r5 + -27664);
    r0 = (r0 * r4);
    r4 = (r7 + r0);
    r0 = (r4 + 56);
    goto loc_808611F4;
}

loc_808611F0:
{
    r0 = 0;
}

loc_808611F4:
{
    r4 = (r0 + r3);
    r6 = 0;
    r0 = MemoryInline::FlatRead8((r4 + 1910));
}

loc_80861204:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80861218;
    }
}

loc_80861208:
{
    r0 = MemoryInline::FlatRead32((r4 + 1924));
}

loc_80861210:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80861218;
    }
}

loc_80861214:
{
    r6 = 1;
}

loc_80861218:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8086121C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80861228;
    }
}

loc_80861220:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861228:
{
    r0 = MemoryInline::FlatRead16((r7 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 + 112);
}

loc_80861234:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80861250;
    }
}

loc_80861238:
{
    r4 = (r0 & 255);
    r0 = (r5 + -27664);
    r0 = (r0 * r4);
    r4 = (r7 + r0);
    r0 = (r4 + 56);
    goto loc_80861254;
}

loc_80861250:
{
    r0 = 0;
}

loc_80861254:
{
    r4 = (r0 + r3);
    r6 = 0;
    r0 = MemoryInline::FlatRead8((r4 + 1910));
}

loc_80861264:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80861278;
    }
}

loc_80861268:
{
    r0 = MemoryInline::FlatRead32((r4 + 1924));
}

loc_80861270:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80861278;
    }
}

loc_80861274:
{
    r6 = 1;
}

loc_80861278:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8086127C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80861288;
    }
}

loc_80861280:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861288:
{
    r8 = (r8 + 1);
    r3 = (r3 + 112);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808611CC;
    }
}

loc_80861294:
{
    r3 = 1;
}

loc_80862738:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0xE00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80861164 func_80861164 preserves=true fpr_mask=0x00000000

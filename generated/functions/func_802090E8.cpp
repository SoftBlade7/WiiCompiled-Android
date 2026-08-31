#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8020C194_statefree(uint32_t);

extern "C" void func_802090E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_802090E8;

loc_802090E8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_802090F4:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(18));
    r29 = (r29_rot_0 & 262143);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8020912C;
    }
}

loc_8020910C:
{
}

loc_80209110:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8020912C;
    }
}

loc_80209114:
{
    r0 = MemoryInline::FlatRead32((r13 + -24216));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020911C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020912C;
    }
}

loc_80209120:
{
    r5 = 0;
    ctx->lr = 0x80209128u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80198CA8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r13 + -24216), r3);
}

loc_8020912C:
{
}

loc_80209130:
{
    r4 = 26;
    if ((static_cast<uint32_t>(r29) > static_cast<uint32_t>(26))) {
        goto loc_8020913C;
    }
}

loc_80209138:
{
    r4 = r29;
}

loc_8020913C:
{
    r0 = MemoryInline::FlatRead32((r13 + -24208));
    MemoryInline::FlatWrite32((r13 + -24224), r4);
}

loc_80209148:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80209170;
    }
}

loc_8020914C:
{
    r3 = MemoryInline::FlatRead32((r13 + -24216));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80209154:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80209160;
    }
}

loc_80209158:
{
    r3 = 0;
    goto loc_8020916C;
}

loc_80209160:
{
    r4 = (r4 * 320);
    r5 = 32;
    ctx->lr = 0x8020916Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80198D88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8020916C:
{
    MemoryInline::FlatWrite32((r13 + -24208), r3);
}

loc_80209170:
{
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_80209178:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8020918C;
    }
}

loc_8020917C:
{
    r29 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_80209184:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8020918C;
    }
}

loc_80209188:
{
    goto loc_80209190;
}

loc_8020918C:
{
    r29 = 0;
}

loc_80209190:
{
    r0 = (r0 * 320);
    r31 = 0;
    r30 = (r29 + r0);
    goto loc_802091CC;
}

loc_802091A0:
{
    r3 = r29;
    r4 = 0;
    r5 = 320;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801EF500u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (r29 + 28);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r29)) + static_cast<uint64_t>(static_cast<uint32_t>(28)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_802091B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802091C8;
    }
}

loc_802091B8:
{
    MemoryInline::FlatWrite32((r29 + 28), r31);
    MemoryInline::FlatWrite32((r29 + 32), r31);
    MemoryInline::FlatWrite32((r29 + 36), r31);
    MemoryInline::FlatWrite32((r29 + 40), r31);
}

loc_802091C8:
{
    r29 = (r29 + 320);
}

loc_802091CC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r30));
}

loc_802091D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802091A0;
    }
}

loc_802091D4:
{
    r0 = MemoryInline::FlatRead32((r13 + -24212));
    r30 = MemoryInline::FlatRead32((r13 + -24224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802091E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80209230;
    }
}

loc_802091E4:
{
    r29 = 0x80380000u;
    r31 = 0;
    r29 = (r29 + 11192);
    goto loc_80209220;
}

loc_802091F4:
{
    r3 = MemoryInline::FlatRead32((r13 + -24216));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802091FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80209208;
    }
}

loc_80209200:
{
    r3 = 0;
    goto loc_80209214;
}

loc_80209208:
{
    r4 = 160;
    r5 = 32;
    ctx->lr = 0x80209214u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80198D88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80209214:
{
    MemoryInline::FlatWrite32(r29, r3);
    r29 = (r29 + 4);
    r31 = (r31 + 1);
}

loc_80209220:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r30));
}

loc_80209224:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802091F4;
    }
}

loc_80209228:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -24212), r0);
}

loc_80209230:
{
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8020C194u) && KnownTranslatedCpuCall<0x8020C194u>::kAvailable && !KnownTranslatedCpuCall<0x8020C194u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8020C194u>()) {
        const auto state_free_result_8020C194_1E84 = func_8020C194_statefree(ctr);
        ctr = static_cast<uint32_t>(state_free_result_8020C194_1E84);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8020C194u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = 0;
    r3 = 2;
    r0 = 8;
    MemoryInline::FlatWrite32((r13 + -24220), r4);
    MemoryInline::FlatWrite32((r13 + -24196), r3);
    MemoryInline::FlatWrite32((r13 + -24200), r0);
    // inline leaf 0x8020F628 (1 guest instruction(s))
    // end of inlined leaf 0x8020F628
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802090E8 func_802090E8 preserves=true fpr_mask=0x00000000

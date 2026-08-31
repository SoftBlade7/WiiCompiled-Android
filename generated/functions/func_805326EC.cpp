#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80538344_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_805326EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805326EC;

loc_805326EC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2936));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80532710:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80532750;
    }
}

loc_80532714:
{
    r30 = MemoryInline::FlatRead32((r3 + 60));
    r31 = MemoryInline::FlatRead8((r4 + 36));
    r4 = MemoryInline::FlatRead32((r4 + 2920));
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80538344u) && KnownTranslatedCpuCall<0x80538344u>::kAvailable && !KnownTranslatedCpuCall<0x80538344u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80538344u>()) {
        const auto state_free_result_80538344_681 = func_80538344_statefree(r4, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80538344_681[0]);
        cr = static_cast<uint32_t>(state_free_result_80538344_681[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80538344u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r31 + -2);
    r3 = (r3 * 22);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = (r4 + r3);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 & 65535);
    goto loc_80532788;
}

loc_80532750:
{
    r30 = MemoryInline::FlatRead32((r3 + 60));
    r31 = MemoryInline::FlatRead8((r4 + 36));
    r4 = MemoryInline::FlatRead32((r4 + 2920));
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80538344u) && KnownTranslatedCpuCall<0x80538344u>::kAvailable && !KnownTranslatedCpuCall<0x80538344u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80538344u>()) {
        const auto state_free_result_80538344_CC0 = func_80538344_statefree(r4, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80538344_CC0[0]);
        cr = static_cast<uint32_t>(state_free_result_80538344_CC0[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80538344u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r31 + -2);
    r3 = (r3 * 22);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r4 + r3);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 476));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 & 65535);
}

loc_80532788:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001A gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805326EC func_805326EC preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_800C4DC0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_800C4DC0_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" void func_800C05B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C05B0;

loc_800C05B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r31));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C05D8;
    }
}

loc_800C05D4:
{
    r31 = 1;
}

loc_800C05D8:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C05EC;
    }
}

loc_800C05E8:
{
    r31 = (r31 + 1);
}

loc_800C05EC:
{
    r0 = 2;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C0600;
    }
}

loc_800C05FC:
{
    r31 = (r31 + 1);
}

loc_800C0600:
{
    r0 = 3;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C0614;
    }
}

loc_800C0610:
{
    r31 = (r31 + 1);
}

loc_800C0614:
{
    r0 = 4;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C0628;
    }
}

loc_800C0624:
{
    r31 = (r31 + 1);
}

loc_800C0628:
{
    r0 = 5;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C063C;
    }
}

loc_800C0638:
{
    r31 = (r31 + 1);
}

loc_800C063C:
{
    r0 = 6;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C0650;
    }
}

loc_800C064C:
{
    r31 = (r31 + 1);
}

loc_800C0650:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C4DC0u) && KnownTranslatedCpuCall<0x800C4DC0u>::kAvailable && !KnownTranslatedCpuCall<0x800C4DC0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C4DC0u>()) {
        const auto state_free_result_800C4DC0_C55 = func_800C4DC0_statefree_v0(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_800C4DC0_C55[0]);
        cr = static_cast<uint32_t>(state_free_result_800C4DC0_C55[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C4DC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r3 * r31);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(5));
    r4 = (r4_rot_0 & -32);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r4 + 31);
    r4 = (r0 & -32);
    r0 = (r3 + 31);
    r3 = (r4 + 65536);
    r0 = (r0 & -32);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = (r3 + -32160);
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001A gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C05B0 func_800C05B0 preserves=true fpr_mask=0x00000000

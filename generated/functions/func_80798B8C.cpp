#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807BC97C_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_80798B8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80798B8C;

loc_80798B8C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(20));
}

loc_80798B98:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80798BBC;
    }
}

loc_80798BB4:
{
    r3 = 1;
    goto loc_80798C1C;
}

loc_80798BBC:
{
    r0 = MemoryInline::FlatRead32((r3 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80798BC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80798C00;
    }
}

loc_80798BC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80798BCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80798BE4;
    }
}

loc_80798BD0:
{
    r0 = MemoryInline::FlatRead32((r3 + 92));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(60));
}

loc_80798BD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80798BE4;
    }
}

loc_80798BDC:
{
    r3 = 1;
    goto loc_80798C1C;
}

loc_80798BE4:
{
    r31 = MemoryInline::FlatRead8((r3 + 130));
    r3 = (r3 + 84);
    // inline leaf 0x807BA350 (11 guest instruction(s))
    r4 = 0;
    r0 = 20;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 43u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 8), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 36), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r3 + 45), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r3 + 46), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x807BA350
    r4 = r30;
    r5 = r31;
    r3 = (r29 + 136);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x807BC940u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
}

loc_80798C00:
{
    r3 = (r29 + 136);
    r4 = 1;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807BC97Cu) && KnownTranslatedCpuCall<0x807BC97Cu>::kAvailable && !KnownTranslatedCpuCall<0x807BC97Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807BC97Cu>()) {
        const auto state_free_result_807BC97C_100A = func_807BC97C_statefree(r3, r4, cr, xer);
        r4 = static_cast<uint32_t>(state_free_result_807BC97C_100A[0]);
        cr = static_cast<uint32_t>(state_free_result_807BC97C_100A[1]);
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
        InvokeDirectCpu<0x807BC97Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r29 + 140));
    r0 = (r3 + -20);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_80798C1C:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003B gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80798B8C func_80798B8C preserves=true fpr_mask=0x00000000

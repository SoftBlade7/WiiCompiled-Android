#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80063C50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80063C50;

loc_80063C50:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x802C0000u;
    r5 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + -32144);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80063C70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063C80;
    }
}

loc_80063C74:
{
    r0 = (r3 * 36);
    r3 = (r4 + r0);
    goto loc_80063D04;
}

loc_80063C80:
{
    r0 = MemoryInline::FlatRead8((r13 + -27312));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80063C94;
    }
}

loc_80063C8C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27312), static_cast<uint8_t>(r0));
}

loc_80063C94:
{
    r4 = 0x802C0000u;
    r3 = 0x802C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -32144));
    r3 = (r3 + -10816);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80063CA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063CB8;
    }
}

loc_80063CAC:
{
    r0 = (r5 * 48);
    r4 = (r4 + r0);
    goto loc_80063CBC;
}

loc_80063CB8:
{
    r4 = 0;
}

loc_80063CBC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085670u>(ctx);
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80063CC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80063CFC;
    }
}

loc_80063CC8:
{
    r4 = 0x802C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29512));
    r3 = (r4 + -10816);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29524));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 32u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 32), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 16), f1.d);
    MemoryInline::FlatWriteRamFloat32((r4 + -10816), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 24), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 20), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 8), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 4), f0.d);
}

loc_80063CFC:
{
    r3 = 0x802C0000u;
    r3 = (r3 + -10816);
}

loc_80063D04:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000203E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00003F83 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80063C50 func_80063C50 preserves=true fpr_mask=0x00000000

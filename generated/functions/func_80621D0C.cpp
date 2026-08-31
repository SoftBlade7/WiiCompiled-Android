#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80621D0C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80621D0C;

loc_80621D0C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 912u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
    MemoryInline::WriteResolved32(guest_range_0, 892u, (r3 + 892), r31);
    MemoryInline::WriteResolved8(guest_range_0, 904u, (r3 + 904), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 905u, (r3 + 905), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 906u, (r3 + 906), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 907u, (r3 + 907), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 908u, (r3 + 908), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 909u, (r3 + 909), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 910u, (r3 + 910), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 911u, (r3 + 911), static_cast<uint8_t>(r31));
    r3 = (r3 + 912);
    ctx->lr = 0x80621D5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80082620u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    MemoryInline::FlatWrite32((r30 + 996), r31);
    r3 = r30;
    MemoryInline::FlatWrite32((r30 + 1024), r31);
    MemoryInline::FlatWrite32((r30 + 1028), r31);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000CE gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80621D0C func_80621D0C preserves=true fpr_mask=0x00000000

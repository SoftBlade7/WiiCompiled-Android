#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065AA88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065AA88;

loc_8065AA88:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r3 + 8416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065AAA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065AB3C;
    }
}

loc_8065AAA4:
{
    r3 = 128;
    ctx->lr = 0x8065AAACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065AAB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065AB34;
    }
}

loc_8065AAB4:
{
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 128u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r4));
    r0 = 255;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r4);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r4);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r4);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r4);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r4);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r4);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r4);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r4);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r4);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r4);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r4);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 76), r4);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r4);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 80), r4);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r4);
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 84), r4);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r4);
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 88), r4);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r4);
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + 92), r4);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r4);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 96), r4);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r4);
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r4);
    MemoryInline::WriteResolved8(guest_range_0, 104u, (r3 + 104), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 116), r4);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 112), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 124), r4);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 120), r4);
    }
}

loc_8065AB34:
{
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r4 + 8416), r3);
}

loc_8065AB3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8065AA88 func_8065AA88 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A23F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r12_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r30 = ctx->gpr[30];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802A23F8;

loc_802A23F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + -14716), 0, 1456u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r30 + -14700));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r0 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r30 + -14684));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + -14708));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + -14708));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + -14680));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r30 + -14700));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r30 + -14692));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + -14716));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1428u, (r30 + -13288));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1444u, (r30 + -13272));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1436u, (r30 + -13280));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1452u, (r30 + -13264));
    // nop
    r1 = (r28 + 542244864);
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(11));
    r12 = (r12_rot_0 & -4194297);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_802A2500:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[2] = r2;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->xer = xer;
    OSSystemCall();
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r12 = ctx->gpr[12];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r28 = ctx->gpr[28];
    r30 = ctx->gpr[30];
    cr = ctx->cr;
    xer = ctx->xer;
    r2 = (20291 - r19);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(20291) >= static_cast<uint32_t>(r19) ? 1u : 0u) << 29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[2] = r2;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x7F6F7928u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r12 = ctx->gpr[12];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r28 = ctx->gpr[28];
    r30 = ctx->gpr[30];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[2] = r2;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802A23F8 func_802A23F8 preserves=true fpr_mask=0x00000000

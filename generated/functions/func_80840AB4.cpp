#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80840AB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80840AB4;

loc_80840AB4:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80840ABC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80840AC0:
{
    r4 = 0x808B0000u;
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -11540));
    r4 = 6;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 2480), 0, 2794u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 2501), static_cast<uint8_t>(r0));
    r5 = -1;
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 2480), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 417u, (r3 + 2897), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 396u, (r3 + 2876), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 813u, (r3 + 3293), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 792u, (r3 + 3272), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 1209u, (r3 + 3689), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 1188u, (r3 + 3668), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 1605u, (r3 + 4085), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 1584u, (r3 + 4064), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 2001u, (r3 + 4481), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 1980u, (r3 + 4460), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 2397u, (r3 + 4877), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 2376u, (r3 + 4856), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 2793u, (r3 + 5273), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 2772u, (r3 + 5252), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80602CF8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFCE gpr_write=0x000010F9 gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x80840AB4 func_80840AB4 preserves=true fpr_mask=0x00000000

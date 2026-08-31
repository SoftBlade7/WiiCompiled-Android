#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023F15C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023F15C;

loc_8023F15C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 104), 0, 189u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 104));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023F178:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023F21C;
    }
}

loc_8023F17C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 172u, (r3 + 276));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023F184:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023F214;
    }
}

loc_8023F188:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 164u, (r3 + 268));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r3 + 280));
    MemoryInline::FlatWriteFloat32((r4 + 60), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 180u, (r3 + 284));
    MemoryInline::FlatWrite8((r4 + 49), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 50), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 51), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 52), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 164u, (r3 + 268));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 184u, (r3 + 288));
    MemoryInline::FlatWriteFloat32((r4 + 76), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 188u, (r3 + 292));
    MemoryInline::FlatWrite8((r4 + 65), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 66), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 67), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 68), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 108));
    ctx->lr = 0x8023F1D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x802311ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = r31;
    ctx->lr = 0x8023F1D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023F230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r4 = (r2 + -24104);
    r3 = MemoryInline::FlatRead8((r31 + 20));
    r0 = MemoryInline::FlatRead16((r31 + 104));
    r7 = MemoryInline::FlatRead8((r2 + -24104));
    r3 = (r3 | 7);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r0 = (r0 & -9);
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r4 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r31 + 21), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 24), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 20), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r31 + 104), static_cast<uint16_t>(r0));
}

loc_8023F214:
{
    r3 = r31;
    ctx->lr = 0x8023F21Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023F4A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_8023F21C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00000FF gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0xE000E73F fpr_write=0xE000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023F15C func_8023F15C preserves=true fpr_mask=0x00000000

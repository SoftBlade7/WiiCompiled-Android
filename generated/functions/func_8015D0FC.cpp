#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015D0FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8015D0FC;

loc_8015D0FC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    r6 = r31;
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r5 = r30;
    r3 = (r1 + 12);
    ctx->lr = 0x8015D12Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8015C954u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015D130:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015D14C;
    }
}

loc_8015D134:
{
    r3 = 0x80290000u;
    r3 = (r3 + -32732);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8015D144u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_8015D23C;
}

loc_8015D14C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r31 + -1);
    r4 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(0));
}

loc_8015D15C:
{
    r0 = (r0 * 12);
    r6 = r30;
    r4 = (r4 + r0);
    r0 = (r4 + 63);
    r7 = (r0 & -32);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8015D22C;
    }
}

loc_8015D174:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015D178:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015D210;
    }
}

loc_8015D180:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 8), 0, 88u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r6 + 8));
    r4 = (r5 + 31);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r6 + 20));
    r0 = (r4 & -32);
    r4 = (r5 + 31);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r6 + 32));
    r7 = (r7 + r0);
    r0 = (r4 & -32);
    r4 = (r5 + 31);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r6 + 44));
    r7 = (r7 + r0);
    r0 = (r4 & -32);
    r4 = (r5 + 31);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r6 + 56));
    r7 = (r7 + r0);
    r0 = (r4 & -32);
    r4 = (r5 + 31);
    r7 = (r7 + r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r6 + 68));
    r0 = (r4 & -32);
    r4 = (r5 + 31);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r6 + 80));
    r7 = (r7 + r0);
    r0 = (r4 & -32);
    r4 = (r5 + 31);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r6 + 92));
    r7 = (r7 + r0);
    r0 = (r4 & -32);
    r6 = (r6 + 96);
    r4 = (r5 + 31);
    r7 = (r7 + r0);
    r0 = (r4 & -32);
    r7 = (r7 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015D180;
    }
}

loc_8015D208:
{
    r3 = (r3 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015D20C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015D22C;
    }
}

loc_8015D210:
{
    ctr = r3;
}

loc_8015D214:
{
    r5 = MemoryInline::FlatRead32((r6 + 8));
    r6 = (r6 + 12);
    r4 = (r5 + 31);
    r0 = (r4 & -32);
    r7 = (r7 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015D214;
    }
}

loc_8015D22C:
{
    r0 = (r31 * 12);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -4));
    r3 = (r7 + r0);
}

loc_8015D23C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8015D0FC func_8015D0FC preserves=true fpr_mask=0x00000000

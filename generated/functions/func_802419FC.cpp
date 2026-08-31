#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802419FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802419FC;

loc_802419FC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r31 = r6;
    r6 = (r1 + 20);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    r30 = r5;
    r5 = (r1 + 16);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
    r29 = r4;
    r4 = (r1 + 12);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
    r28 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80173498 (18 guest instruction(s))
    r7 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = MemoryInline::FlatRead32((r7 + 328));
    r8 = MemoryInline::FlatRead32((r7 + 332));
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r10 = (r10_rot_0 & 2047);
    r9 = (r0 & 2047);
    r7 = (r10 + -342);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(20));
    r0 = (r0_rot_0 & 2047);
    MemoryInline::WriteResolved32(guest_range_0, 8u, r3, r7);
    r7 = (r9 + -342);
    r3 = (r0 - r10);
    r0 = (r8 & 2047);
    MemoryInline::WriteResolved32(guest_range_0, 12u, r4, r7);
    r4 = (r3 + 1);
    r3 = (r0 - r9);
    MemoryInline::WriteResolved32(guest_range_0, 16u, r5, r4);
    r0 = (r3 + 1);
    MemoryInline::WriteResolved32(guest_range_0, 20u, r6, r0);
    // end of inlined leaf 0x80173498
    r3 = 0x80380000u;
    r0 = MemoryInline::FlatRead32((r3 + 17696));
    r0 = (r0 & 4);
}

loc_80241A48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80241A7C;
    }
}

loc_80241A4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80241A54:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_80241A7C;
    }
}

loc_80241A58:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_80241A60:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_80241A7C;
    }
}

loc_80241A64:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_80241A6C:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80241A7C;
    }
}

loc_80241A70:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_80241A78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80241AAC;
    }
}

loc_80241A7C:
{
    r3 = r28;
    r4 = r29;
    r5 = r30;
    r6 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80173430u>(ctx);
    r0 = MemoryInline::FlatRead16((r13 + -27720));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80241A98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80241AAC;
    }
}

loc_80241A9C:
{
    r3 = 0x80380000u;
    r0 = MemoryInline::FlatRead32((r3 + 17696));
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam32((r3 + 17696), r0);
}

loc_80241AAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000207F gpr_write=0xF00007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802419FC func_802419FC preserves=true fpr_mask=0x00000000

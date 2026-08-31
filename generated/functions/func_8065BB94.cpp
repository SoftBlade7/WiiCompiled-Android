#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065BB94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065BB94;

loc_8065BB94:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    r5 = 248;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r31);
    }
    r26 = r3;
    r30 = 0;
    r3 = MemoryInline::FlatRead32((r4 + 8016));
    r4 = 0;
    r28 = (r3 + 148);
    r3 = r28;
    r29 = (r28 + 24);
    ctx->lr = 0x8065BBCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r27 = (r26 + 4);
    r31 = 0;
}

loc_8065BBD4:
{
    r0 = MemoryInline::FlatRead8((r27 + 25));
}

loc_8065BBDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8065BBF4;
    }
}

loc_8065BBE0:
{
}

loc_8065BBE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8065BBF4;
    }
}

loc_8065BBE8:
{
    r3 = MemoryInline::FlatRead8((r27 + 26));
}

loc_8065BBF0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(16))) {
        goto loc_8065BBFC;
    }
}

loc_8065BBF4:
{
    r0 = 16;
    goto loc_8065BC08;
}

loc_8065BBFC:
{
    r0 = MemoryInline::FlatRead8((r27 + 27));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & 224);
    r0_mrot_2 = (r3 & 31);
    r0_mdest_2 = (r0 & -32);
    r0 = (r0_mdest_2 | r0_mrot_2);
}

loc_8065BC08:
{
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    r28 = (r28 + 1);
    r0 = MemoryInline::FlatRead8((r27 + 25));
}

loc_8065BC18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8065BC40;
    }
}

loc_8065BC1C:
{
    r5 = MemoryInline::FlatRead8((r27 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8065BC24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065BC40;
    }
}

loc_8065BC28:
{
    r3 = r29;
    r4 = (r27 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r27 + 28));
    r30 = (r30 + r0);
    r29 = (r29 + r0);
}

loc_8065BC40:
{
    r31 = (r31 + 1);
    r27 = (r27 + 32);
}

loc_8065BC4C:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(24))) {
        goto loc_8065BBD4;
    }
}

loc_8065BC50:
{
    r0 = (224 - r30);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(224) >= static_cast<uint32_t>(r30) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite32((r26 + 11140), r0);
    r29 = 0;
    r28 = 0x809C0000u;
    r31 = 0x809C0000u;
    r27 = 1;
}

loc_8065BC68:
{
    r5 = MemoryInline::FlatRead32((r31 + 8408));
    r0 = (r29 & 255);
    r3 = PPC_Slw(static_cast<uint32_t>(r27), static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8065BCC4;
    }
}

loc_8065BC8C:
{
    r0 = MemoryInline::FlatRead8((r4 + 89));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
}

loc_8065BC94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065BCC4;
    }
}

loc_8065BC98:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 1020);
    r3 = MemoryInline::FlatRead32((r28 + 8016));
    r6 = (r5 + r0);
    r5 = (r30 + 24);
    r0 = MemoryInline::FlatRead32((r6 + 10092));
    r4 = (r3 + 148);
    r0 = (r0 * 48);
    r3 = (r0 + r6);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r3 = MemoryInline::FlatRead32((r3 + 28));
    ctx->lr = 0x8065BCC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8065A34Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8065BCC4:
{
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(12));
}

loc_8065BCCC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065BC68;
    }
}

loc_8065BCD0:
{
    r26 = MemoryInline::FlatRead32((r1 + 8));
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0000FB gpr_write=0xFC0000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8065BB94 func_8065BB94 preserves=true fpr_mask=0x00000000

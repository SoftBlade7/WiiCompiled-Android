#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800730B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800730B0;

loc_800730B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800730BC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 36), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 40), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 44), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 48), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80073134;
    }
}

loc_80073114:
{
    r0 = MemoryInline::FlatRead32((r4 + 232));
    r4 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E9F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_8007312C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80073134;
    }
}

loc_80073130:
{
    r28 = 1;
}

loc_80073134:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80073138:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800732D4;
    }
}

loc_8007313C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r29, r30);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r29 + 4), r31);
    }
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 332), 0, 44u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r30 + 332));
}

loc_8007314C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80073160;
    }
}

loc_80073150:
{
    r0 = (r31 * 260);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r29 + 8), r0);
    goto loc_80073168;
}

loc_80073160:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r29 + 8), r0);
}

loc_80073168:
{
    r3 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r30 + 336));
}

loc_80073170:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80073184;
    }
}

loc_80073174:
{
    r0 = (r31 * 100);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r29 + 12), r0);
    goto loc_8007318C;
}

loc_80073184:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r29 + 12), r0);
}

loc_8007318C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r30 + 340));
}

loc_80073194:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800731A8;
    }
}

loc_80073198:
{
    r0 = (r31 * 584);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r29 + 16), r0);
    goto loc_800731B0;
}

loc_800731A8:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r29 + 16), r0);
}

loc_800731B0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r30 + 344));
}

loc_800731B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800731CC;
    }
}

loc_800731BC:
{
    r0 = (r31 * 40);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r29 + 20), r0);
    goto loc_800731D4;
}

loc_800731CC:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r29 + 20), r0);
}

loc_800731D4:
{
    r3 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r30 + 348));
}

loc_800731DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800731F0;
    }
}

loc_800731E0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r29 + 24), r0);
    goto loc_800731F8;
}

loc_800731F0:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r29 + 24), r0);
}

loc_800731F8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r30 + 352));
}

loc_80073200:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80073214;
    }
}

loc_80073204:
{
    r0 = (r31 * 12);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r29 + 28), r0);
    goto loc_8007321C;
}

loc_80073214:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r29 + 28), r0);
}

loc_8007321C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r30 + 356));
}

loc_80073224:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80073238;
    }
}

loc_80073228:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & -32);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r29 + 32), r0);
    goto loc_80073240;
}

loc_80073238:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r29 + 32), r0);
}

loc_80073240:
{
    r3 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r30 + 360));
}

loc_80073248:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8007325C;
    }
}

loc_8007324C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(7));
    r0 = (r0_rot_5 & -128);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r29 + 36), r0);
    goto loc_80073264;
}

loc_8007325C:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r29 + 36), r0);
}

loc_80073264:
{
    r3 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r30 + 364));
}

loc_8007326C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80073280;
    }
}

loc_80073270:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(6));
    r0 = (r0_rot_7 & -64);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r29 + 40), r0);
    goto loc_80073288;
}

loc_80073280:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r29 + 40), r0);
}

loc_80073288:
{
    r3 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r30 + 368));
}

loc_80073290:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800732A4;
    }
}

loc_80073294:
{
    r0 = (r31 * 160);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r29 + 44), r0);
    goto loc_800732AC;
}

loc_800732A4:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r29 + 44), r0);
}

loc_800732AC:
{
    r3 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r30 + 372));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800732B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800732C8;
    }
}

loc_800732B8:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(9));
    r0 = (r0_rot_9 & -512);
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r29 + 48), r0);
    goto loc_8007330C;
}

loc_800732C8:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r29 + 48), r0);
    goto loc_8007330C;
}

loc_800732D4:
{
    r0 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost(r29, 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r29, r0);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r29 + 4), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r29 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r29 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r29 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r29 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r29 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r29 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r29 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r29 + 36), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r29 + 40), r0);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r29 + 44), r0);
    }
    MemoryInline::WriteResolved32(guest_range_2, 48u, (r29 + 48), r0);
}

loc_8007330C:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = r29;
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000003B gpr_write=0xF000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800730B0 func_800730B0 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052FA0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8052FA0C;

loc_8052FA0C:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    r4 = 0;
    r5 = 112;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRam32((r1 + 156), r31);
    r31 = r3;
    r3 = (r1 + 40);
    ctx->lr = 0x8052FA30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
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
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x8052FA4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r1 + 12));
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 20), 0, 48u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r5 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052FA58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052FB7C;
    }
}

loc_8052FA5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8052FA60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052FA68;
    }
}

loc_8052FA64:
{
    goto loc_8052FB7C;
}

loc_8052FA68:
{
    r3 = 0x80890000u;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & 262140);
    r3 = (r3 + 232);
    r0 = 11;
    r3_addr_1 = (r3 + r4);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 42), 0, 80u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r1 + 42), static_cast<uint16_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r5 + 22));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r1 + 44), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r5 + 23));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r1 + 47), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 42u, (r5 + 62));
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r1 + 87), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 46u, (r5 + 66));
    MemoryInline::WriteResolved32(guest_range_1, 46u, (r1 + 88), r3);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 46u, (r5 + 66));
    MemoryInline::WriteResolved32(guest_range_1, 50u, (r1 + 92), r3);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 46u, (r5 + 66));
    MemoryInline::WriteResolved32(guest_range_1, 54u, (r1 + 96), r3);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 46u, (r5 + 66));
    MemoryInline::WriteResolved32(guest_range_1, 58u, (r1 + 100), r3);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 46u, (r5 + 66));
    MemoryInline::WriteResolved32(guest_range_1, 62u, (r1 + 104), r3);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 46u, (r5 + 66));
    MemoryInline::WriteResolved32(guest_range_1, 66u, (r1 + 108), r3);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r5 + 28));
    MemoryInline::WriteResolved16(guest_range_1, 70u, (r1 + 112), static_cast<uint16_t>(r3));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r5 + 30));
    MemoryInline::WriteResolved16(guest_range_1, 72u, (r1 + 114), static_cast<uint16_t>(r3));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r5 + 32));
    MemoryInline::WriteResolved16(guest_range_1, 74u, (r1 + 116), static_cast<uint16_t>(r3));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r5 + 34));
    MemoryInline::WriteResolved16(guest_range_1, 76u, (r1 + 118), static_cast<uint16_t>(r3));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r5 + 36));
    MemoryInline::WriteResolved16(guest_range_1, 78u, (r1 + 120), static_cast<uint16_t>(r3));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r5 + 38));
}

loc_8052FAF8:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(11))) {
        goto loc_8052FB00;
    }
}

loc_8052FAFC:
{
    r0 = r3;
}

loc_8052FB00:
{
    MemoryInline::FlatWriteRam16((r1 + 128), static_cast<uint16_t>(r0));
    r6 = 0;
    r4 = MemoryInline::FlatRead32((r1 + 12));
    goto loc_8052FB34;
}

loc_8052FB10:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 510);
    r5 = (r1 + 40);
    r3 = (r4 + r0);
    r6 = (r6 + 1);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 40));
    MemoryInline::FlatWrite8((r5 + 90), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 41));
    MemoryInline::FlatWrite8((r5 + 91), static_cast<uint8_t>(r0));
}

loc_8052FB34:
{
    r5 = MemoryInline::FlatRead16((r4 + 38));
    r3 = (r6 & 255);
    r0 = 11;
}

loc_8052FB44:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(11))) {
        goto loc_8052FB4C;
    }
}

loc_8052FB48:
{
    r0 = r5;
}

loc_8052FB4C:
{
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8052FB54:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052FB10;
    }
}

loc_8052FB58:
{
    r0 = 14;
    r5 = (r31 + 2936);
    r4 = (r1 + 36);
    ctr = r0;
}

loc_8052FB68:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052FB68;
    }
}

loc_8052FB7C:
{
    r0 = MemoryInline::FlatRead32((r1 + 164));
    r31 = MemoryInline::FlatRead32((r1 + 156));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052FA0C func_8052FA0C preserves=true fpr_mask=0x00000000

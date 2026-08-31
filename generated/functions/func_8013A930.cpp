#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013A930(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8013A930;

loc_8013A930:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80330000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 + 25208);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 9u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013A94C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013A99C;
    }
}

loc_8013A950:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    MemoryInline::FlatWriteRam8((r5 + 1590), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam16((r5 + 1592), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    MemoryInline::FlatWriteRam8((r5 + 1594), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam16((r5 + 1596), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 8));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam16((r5 + 1598), static_cast<uint16_t>(r0));
}

loc_8013A99C:
{
    r3 = 0x80330000u;
    r0 = 4;
    r3 = (r3 + 25208);
    MemoryInline::FlatWriteRam8((r3 + 1614), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 1615), static_cast<uint8_t>(r0));
}

loc_8013A9C8:
{
    r3 = (r3 + 1396);
    r4 = 1;
    r5 = 1;
    ctx->lr = 0x8013A9D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131D0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctx->lr = 0x8013A9DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801465B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xF00010FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8013A930 func_8013A930 preserves=true fpr_mask=0x00000000

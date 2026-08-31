#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014D944(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r29 = ctx->gpr[29];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8014D944;

loc_8014D944:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r16 + 4), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r16 + 5));
    r3 = r15;
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r16 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r16 + 9));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r16 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r16 + 7));
    r0 = (r4 + r0);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r16 + 6));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r4 = (r4_rot_0 & -256);
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
    r0 = (r6 + r4);
    r17 = (r0 & 65535);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r16 + 11));
    r4 = r17;
    r5 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r16 + 10));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r0 = (r5 + r0);
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014F974u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8014D9A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8014D9CC;
    }
}

loc_8014D9A8:
{
    r0 = MemoryInline::FlatRead8((r27 + -27840));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8014D9B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014D724;
    }
}

loc_8014D9B4:
{
    r6 = MemoryInline::FlatRead16((r1 + 22));
    r5 = r17;
    r3 = (r29 + 1);
    r4 = (r23 + 468);
    ctx->lr = 0x8014D9C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131770u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014D724u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    return;
}

loc_8014D9CC:
{
    r5 = MemoryInline::FlatRead8((r3 + 53));
}

loc_8014D9D4:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r25))) {
        goto loc_8014D9F8;
    }
}

loc_8014D9D8:
{
    r0 = MemoryInline::FlatRead8((r27 + -27840));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8014D9E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014D724;
    }
}

loc_8014D9E4:
{
    r6 = r25;
    r3 = (r29 + 1);
    r4 = (r23 + 516);
    ctx->lr = 0x8014D9F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131770u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014D724u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    return;
}

loc_8014D9F8:
{
    r0 = MemoryInline::FlatRead16((r1 + 18));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014DA00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014DA14;
    }
}

loc_8014DA04:
{
    r5 = (r1 + 8);
    r4 = 11;
    ctx->lr = 0x8014DA10u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014AC2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014D724u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    return;
}

loc_8014DA14:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8014DA18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014DA2C;
    }
}

loc_8014DA1C:
{
    r5 = (r1 + 8);
    r4 = 12;
    ctx->lr = 0x8014DA28u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014AC2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014D724u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    return;
}

loc_8014DA2C:
{
    r5 = (r1 + 8);
    r4 = 13;
    ctx->lr = 0x8014DA38u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014AC2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014D724u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    return;
}

loc_8014D724:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014D724u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r23 = ctx->gpr[23];
    r25 = ctx->gpr[25];
    r27 = ctx->gpr[27];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[17] = r17;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8014D944 func_8014D944 preserves=true fpr_mask=0x00000000

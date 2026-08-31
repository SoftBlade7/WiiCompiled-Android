#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008BFE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008BFE0;

loc_8008BFE0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r6 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8008C010:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008C01C;
    }
}

loc_8008C014:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8008C23C;
}

loc_8008C01C:
{
    r4 = MemoryInline::FlatRead16(r29);
    r5 = (r6 + 62);
    MemoryInline::FlatWrite16((r6 + 60), static_cast<uint16_t>(r4));
    r0 = 0;
}

loc_8008C030:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8008C038;
    }
}

loc_8008C034:
{
    r0 = (r0 | 1);
}

loc_8008C038:
{
    r6 = MemoryInline::FlatRead16((r29 + 2));
    r4 = (r29 + 4);
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 46u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r5, static_cast<uint16_t>(r6));
}

loc_8008C048:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C050;
    }
}

loc_8008C04C:
{
    r0 = (r0 | 5);
}

loc_8008C050:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 44u, true, false);
    r6 = MemoryInline::ReadResolved16(guest_range_1, 0u, r4);
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r5 + 2), static_cast<uint16_t>(r6));
}

loc_8008C05C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C064;
    }
}

loc_8008C060:
{
    r0 = (r0 | 2);
}

loc_8008C064:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r5 + 4), static_cast<uint16_t>(r6));
}

loc_8008C070:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C078;
    }
}

loc_8008C074:
{
    r0 = (r0 | 6);
}

loc_8008C078:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r5 + 6), static_cast<uint16_t>(r6));
}

loc_8008C084:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C08C;
    }
}

loc_8008C088:
{
    r0 = (r0 | 65536);
}

loc_8008C08C:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r5 + 8), static_cast<uint16_t>(r6));
}

loc_8008C098:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C0A0;
    }
}

loc_8008C09C:
{
    r0 = (r0 | 327680);
}

loc_8008C0A0:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r5 + 10), static_cast<uint16_t>(r6));
}

loc_8008C0AC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C0B4;
    }
}

loc_8008C0B0:
{
    r0 = (r0 | 131072);
}

loc_8008C0B4:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r5 + 12), static_cast<uint16_t>(r6));
}

loc_8008C0C0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C0C8;
    }
}

loc_8008C0C4:
{
    r0 = (r0 | 393216);
}

loc_8008C0C8:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r4 + 12));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r5 + 14), static_cast<uint16_t>(r6));
}

loc_8008C0D4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C0DC;
    }
}

loc_8008C0D8:
{
    r0 = (r0 | 2097152);
}

loc_8008C0DC:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r4 + 14));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r5 + 16), static_cast<uint16_t>(r6));
}

loc_8008C0E8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C0F0;
    }
}

loc_8008C0EC:
{
    r0 = (r0 | 10485760);
}

loc_8008C0F0:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r5 + 18), static_cast<uint16_t>(r6));
}

loc_8008C0FC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C104;
    }
}

loc_8008C100:
{
    r0 = (r0 | 4194304);
}

loc_8008C104:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r4 + 18));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r5 + 20), static_cast<uint16_t>(r6));
}

loc_8008C110:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C118;
    }
}

loc_8008C114:
{
    r0 = (r0 | 12582912);
}

loc_8008C118:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r4 + 20));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r5 + 22), static_cast<uint16_t>(r6));
}

loc_8008C124:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C12C;
    }
}

loc_8008C128:
{
    r0 = (r0 | 67108864);
}

loc_8008C12C:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r4 + 22));
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r5 + 24), static_cast<uint16_t>(r6));
}

loc_8008C138:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C140;
    }
}

loc_8008C13C:
{
    r0 = (r0 | 335544320);
}

loc_8008C140:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 24u, (r4 + 24));
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r5 + 26), static_cast<uint16_t>(r6));
}

loc_8008C14C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C154;
    }
}

loc_8008C150:
{
    r0 = (r0 | 134217728);
}

loc_8008C154:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r4 + 26));
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r5 + 28), static_cast<uint16_t>(r6));
}

loc_8008C160:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C168;
    }
}

loc_8008C164:
{
    r0 = (r0 | 402653184);
}

loc_8008C168:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 28u, (r4 + 28));
    MemoryInline::WriteResolved16(guest_range_0, 30u, (r5 + 30), static_cast<uint16_t>(r6));
}

loc_8008C174:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C17C;
    }
}

loc_8008C178:
{
    r0 = (r0 | 8);
}

loc_8008C17C:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 30u, (r4 + 30));
    MemoryInline::WriteResolved16(guest_range_0, 32u, (r5 + 32), static_cast<uint16_t>(r6));
}

loc_8008C188:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C190;
    }
}

loc_8008C18C:
{
    r0 = (r0 | 24);
}

loc_8008C190:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 32u, (r4 + 32));
    MemoryInline::WriteResolved16(guest_range_0, 34u, (r5 + 34), static_cast<uint16_t>(r6));
}

loc_8008C19C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C1A4;
    }
}

loc_8008C1A0:
{
    r0 = (r0 | 524288);
}

loc_8008C1A4:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 34u, (r4 + 34));
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r5 + 36), static_cast<uint16_t>(r6));
}

loc_8008C1B0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C1B8;
    }
}

loc_8008C1B4:
{
    r0 = (r0 | 1572864);
}

loc_8008C1B8:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 36u, (r4 + 36));
    MemoryInline::WriteResolved16(guest_range_0, 38u, (r5 + 38), static_cast<uint16_t>(r6));
}

loc_8008C1C4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C1CC;
    }
}

loc_8008C1C8:
{
    r0 = (r0 | 16777216);
}

loc_8008C1CC:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 38u, (r4 + 38));
    MemoryInline::WriteResolved16(guest_range_0, 40u, (r5 + 40), static_cast<uint16_t>(r6));
}

loc_8008C1D8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C1E0;
    }
}

loc_8008C1DC:
{
    r0 = (r0 | 50331648);
}

loc_8008C1E0:
{
    r6 = MemoryInline::ReadResolved16(guest_range_1, 40u, (r4 + 40));
    MemoryInline::WriteResolved16(guest_range_0, 42u, (r5 + 42), static_cast<uint16_t>(r6));
}

loc_8008C1EC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8008C1F4;
    }
}

loc_8008C1F0:
{
    r0 = (r0 | 536870912);
}

loc_8008C1F4:
{
    r4 = MemoryInline::ReadResolved16(guest_range_1, 42u, (r4 + 42));
    MemoryInline::WriteResolved16(guest_range_0, 44u, (r5 + 44), static_cast<uint16_t>(r4));
}

loc_8008C200:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8008C208;
    }
}

loc_8008C204:
{
    r0 = (r0 | 1610612736);
}

loc_8008C208:
{
    r4 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8008C210:
{
    MemoryInline::FlatWrite32((r4 + 52), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008C22C;
    }
}

loc_8008C218:
{
    r4 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r0 | 18);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    goto loc_8008C238;
}

loc_8008C22C:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 | 18);
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_8008C238:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8008C23C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000007B gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008BFE0 func_8008BFE0 preserves=true fpr_mask=0x00000000
